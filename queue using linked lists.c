#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
struct node *front=NULL,*rear=NULL;
struct node* create()
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	return(ptr);
} 
void enque()
{
	struct node *temp;
	temp=create();
	printf("Enter info\n");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	printf("Element ENQUED...");
	getch();
}
void deque()
{
	struct node* temp;
	int pos,i;
	if(front==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);
		printf("Element DEQUED...");
	}
	getch();
}
void view_queue()
{
	struct node *temp;
	if(front==NULL)
	printf("List is Empty!");
	else
	{
		temp=front;
		printf("The stored list is\n");
		while(temp!=NULL)
		{
			printf("-> %d",temp->info);
			temp=temp->next;
		}
	}
	getch();
}
int menu()
{
	int choice;
	printf("\n...QUEUE (Linked List Implementation)...\n\n");
	printf("1. Enque Element.\n");
	printf("2. Deque Element.\n");
	printf("3. View Queue.\n");
	printf("4. Exit.\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	return (choice);
}
main()
{
	while(1)
	{system("cls");
		switch(menu())
		{
			case 1:
				enque();
				break;
				case 2:
					deque();
					break;
					case 3:
						view_queue();
						break;
						case 4:
							exit (0);
							break;
							default:
								printf("\nInvalid choice.\n");
								getch();
		}
	}
}

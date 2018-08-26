#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node * next;
};
void display(struct node* start)
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		temp=temp->next;
	}
}
void concatenate(struct node*start1,struct node*start2)
{
	struct node *temp;
	temp=start1;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=start2;
	printf("\nConcatenated List...\n");
	printf("___________\n\n");
	display(start1);
	printf("___________\n\n");
}
main()
{
	struct node*start1=NULL,*start2=NULL,*ptr1,*ptr2,*tail1=NULL,*tail2=NULL;
	char opt1,opt2;
	printf("LIST 1...\n");
	do
	{
		ptr1=(struct node*)malloc(sizeof(struct node));
		if(start1==NULL)
		{
			start1=ptr1;
			tail1=ptr1;
		}
		else
		{
			tail1->next=ptr1;
			ptr1->next=NULL;
			tail1=ptr1;
		}
		printf("Enter node info\n");
		scanf("%d",&ptr1->info);
		printf("Enter 'y' to continue or any other key to exit\n");
		opt1=getch();
	}while(opt1=='y');
	
	printf("LIST 2...\n");
	do
	{
		ptr2=(struct node*)malloc(sizeof(struct node));
		if(start2==NULL)
		{
			start2=ptr2;
			tail2=ptr2;
		}
		else
		{
			tail2->next=ptr2;
			ptr2->next=NULL;
			tail2=ptr2;
		}
		printf("Enter node info\n");
		scanf("%d",&ptr2->info);
		printf("Enter 'y' to continue or any other key to exit\n");
		opt2=getch();
	}while(opt2=='y');
	printf("\nLIST 1...\n");
		printf("___________\n\n");
	display(start1);
	printf("\nLIST 2...\n");
		printf("___________\n\n");
	display(start2);
	concatenate(start1,start2);
	getch();
}


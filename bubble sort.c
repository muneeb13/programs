#include<stdio.h>

void create(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
}
void display(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("  %d",arr[i]);
}
main()
{	int i,j,temp,min;
	int n;
	printf("Enter size of array.\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	create(arr,n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j+1]<arr[j])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}
	}
	printf("\nSorted array is\n");
	for(i=0;i<n;i++)
	printf(" %d",arr[i]);
}


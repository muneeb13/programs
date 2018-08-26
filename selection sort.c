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
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<n;i++)
	printf(" %d",arr[i]);
}


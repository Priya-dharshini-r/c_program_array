#include<stdio.h>
#include<conio.h>
void main()
{
	int n,arr[100],i,j,temp;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	printf("\nThe elements in array are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The arranged elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}

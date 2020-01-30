#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0, n, arr[i];
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("\nthe array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\t",i, arr[i]);
    }
}

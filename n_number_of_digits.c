//enter n number of digits
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int number=0,digit[10],numofdigit,i;
	printf("Enter the number of elements");
	scanf("%d",&numofdigit);
	printf("Enter the elements in the array");
	for(i=0;i<numofdigit;i++)
	{
		printf("\n Enter the %d th digit",i);
		scanf("%d",&digit[i]);
	}
	i=0;
	while(i<numofdigit)
	{
		number=number+digit[i]*pow(10,i);
		i++;
	}
	printf("The number is %d",number);
}

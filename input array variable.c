//program to print input variables into an array and display them.
#include<stdio.h>
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter the value of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("The array element are:");
	for(i=0;i<10;i++)
	{
		
		printf("%d  ",arr[i]);
		printf("\n");
	}
	return 0;
}
/* C program that will read 10 numbers from user in an array
and print array data in sorted order(ascending order), sort using Bubble sort*/
#include<stdio.h>
int main()
{
	int data[10],i,j,temp;
	for(i=0;i<10;i++){
		printf("enter number %d:",i+1);
		scanf("%d",&data[i]);
	}
	//sort data using Bubble sort
	for(i=0;i<10-1;i++)
	{
		for(j=10-1;j>i;j--)
		{
			if(data[j]<data[j-1])
			{
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
	}
	//print data
	printf("\nEntered data are:");
	for(i=0;i<10;i++)
	printf("%d,",data[i]);
	printf("\n");
	return 0;
}
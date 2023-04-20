#include<stdio.h>
#include<conio.h>
int main()
{
	int year,rem;
	printf("Enter any year:");
	scanf("%d",&year);
	rem=year%4;
	if(rem==0)
	{
		rem=year%100;
		if(rem!=0)
		{
			printf("\n%d is leap year",year);
			
		}
		else
		{
			rem=year%400;
			if(rem==0)
			printf("\n%d is leap year",year);
			else
			printf("\n%d is not leap year",year);
		}
	}
	else
	printf("\n %d is not leap year",year);
}
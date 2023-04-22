/*WAP that will accept the month number and print number of days in that month*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter any number(1-12)");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf(" Januay = 31 days");
	}
	else
	if(num==2)
		{
			printf(" February = 28/29 days");
		}
		else
		if(num==3)
			{
				printf(" March = 31 days");
			}
			else
			if(num==4)
				{
					printf("April = 30 days");
				}
			else
			if(num==5)
				{
					printf("May = 31 days");
				}
			else
			if(num==6)
				{
					printf("June = 30 days");
				}
			else
			if(num==7)
				{
					printf("July = 31 days");
				}
			else
			if(num==8)
				{
					printf(" August = 31 days");
				}
			else
			if(num==9)
				{
	                printf("September = 30 days");			
				}
			else
			if(num==10)
				{
					printf("October = 31 days");
				}
			else
			if(num==11)
				{
					printf("November = 30 days");
				}
			else
			if(num==12)
				{
					printf("December = 31 days");
				}
				else
				printf("invalid number! plz enter the number between one to twelve");
return 0;				
}
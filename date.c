/*WAP to print the date*/
#include<stdio.h>
int main()
{
	int dd,mm,yy;
	printf("Enter a date(dd/mm/yyyy)");
	scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
	if(mm>=1&&mm<=12)
	{
		if(dd>=1&&dd<=31)
		printf("Date is valid");
		else
		if(dd>=1&&dd<=30)
		printf("Date is valid");
		else
		if(dd>=1&&dd<=28)
		printf("Date is valid");
		else
		if(dd==29)
		printf("Date is valid");
		else
		printf("Date is invalid");
	}
	else
	printf("month is not valid");
	return 0;
}
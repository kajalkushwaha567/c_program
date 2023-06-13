//WAP to find the hcf of two non-zero positive number using division method.
#include<stdio.h>
int main()
{
	int a,b,dr,dd,r;
	printf("Enter any two positive number:");
	scanf("%d%*c%d",&a,&b);
	if(a<b)
	{
		dr=a;
		dd=b;
	}
	else
	{
		dr=b;
		dd=a;
	}
	r=dd%dr;
	do
	{
		dd=dr;
		dr=r;
		r=dd%dr;
	}while(r!=0);
	printf("HCF of %d and %d is %d",a,b,dr);
	return 0;
	
}
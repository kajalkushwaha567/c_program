//WAP to find the HCF of two non zero positive number using division method.
#include<stdio.h>
int main()
{
	int a,b,dr,dd,r,x,y;
	printf("Enter any two positive number:");
	scanf("%d%*c%d",&a,&b);
	x=a;
	y=b;
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
	while(r!=0)
	{
	   dd=dr;
	   dr=r;
	   r=dd%dr;	
	}
	
	printf("HCF of %d and %d is %d",x,y,dr);
	return 0;
	
}
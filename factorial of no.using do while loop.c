//WAP to find the factorial of any given number.
#include<stdio.h>
int main()
{
	int n,f,c;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n<0)
	n=n*-1;
	f=1;
	c=n;
	do
	{
		f=f*c;
		c=c-1;
	}while(c>0);
	printf("factorial of %d is %d",n,f);
	return 0;
	
}
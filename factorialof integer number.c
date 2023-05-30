//WAP that will accept an integer number and print the factorial of that number.
#include<stdio.h>
int main()
{
	int n,f,c;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n<0)
	{
		n=n*-1;
		
	}
	f=1,c=n;
	while(c>0)
	{
		f=f*c;
		c=c-1;
	}
	printf("factorial of %d is %d",n,f);
}
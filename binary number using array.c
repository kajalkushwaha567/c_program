// c program to find the binary of any integer number.
#include<stdio.h>
int main()
{
	int rem[32],c=0,x,n,r,i;
	printf("Enter any number:");
	scanf("%d",&n);
	x=n;
	while(x!=0)
	{
		r=x%2;
		rem[c]=r;
		c=c+1;
		x=x/2;
	}
	i=c-1;
	while(i>=0)
	{
		printf("%d",rem[i]);
		i=i-1;
	}
	return 0;
}
//WAP to find the hcf of any two positive number

#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter any two positive number:");
	scanf("%d%*c%d",&x,&y);
	a=x;
	b=y;
	
	while(x!=y)
	{
		if(x>y)
		x=x-y;
		else
		y=y-x;
	}
	printf("The hcf of %d and %d is %d",a,b,x);
	return 0;
}
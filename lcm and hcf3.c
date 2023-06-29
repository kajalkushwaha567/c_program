//WAP to find the hcf and lcm  of any two positive number

#include<stdio.h>
int main()
{
	int x,y,a,b,c,d;
	printf("Enter any two positive number for hcf and lcm:");
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
	c=x;
	d=y;
	while(x!=y)
	{
		if(x<y)
		x=x+c;
		else
		y=y+d;
		
	}
	printf("The hcf of %d and %d is %d",a,b,x);
	printf("The lcm of %d and %d is %d",c,d,x);
	return 0;
}
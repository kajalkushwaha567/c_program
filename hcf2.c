//WAP to find the hcf and lcm  of any two positive number

#include<stdio.h>
int main()
{
	int x,y,a,b,c,d,w,z;
	printf("Enter any two positive number for hcf:");
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
	
	printf("\n\nEnter any two positive number for lcm:");
	scanf("%d%*c%d",&w,&z);
	c=w;
	d=z;
	while(w!=z)
	{
		if(w<z)
		w=w+c;
		else
		z=z+d;
	}
	printf("The lcm of %d and %d is %d",c,d,w);
	return 0;
}
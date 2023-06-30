//WAP TO FIND THE LCM OF TWO POSITIVE NUMBER USING FOR LOOP.
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter any two positive number:");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	for(;a!=b;)
	{
		if(a<b)
		a=a+x;
		else
		b=b+y;
	}
	printf("%d is the lcm of %d and %d",a,x,y);
	return 0;
}
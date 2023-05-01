#include<stdio.h>
int main()
{
	int r,c,a;
	printf("Enter radius");
	scanf("%d",&r);
	c=2*3.14*r;
	printf("circumference is %d",c);
	a=3.14*r*r;
	printf("radius is %d",a);
	return 0;
}
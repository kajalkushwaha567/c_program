/*write a program that accept the radius of a circle and calculate tha area and perimeter of
that circle*/
#include<stdio.h>
int main()
{
	int r,area,perimeter;
	printf("Enter radius of circle:");
	scanf("%d",&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("area=%d\nperimeter=%d",area,perimeter);
	return 0;
	
}
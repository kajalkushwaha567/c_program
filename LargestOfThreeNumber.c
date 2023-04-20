/* c program to find larger of three number*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	if(a>b>c)
	printf("a is larger=%d",a);
	else if(b>c)
	printf("b is larger=%d",b);
	else
	printf("c is larger=%d",c);
	
	return 0;
	
	
	}
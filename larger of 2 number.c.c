/* c program to find larger of two number*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a>b)
	printf("a is larger=%d",a);
	else
	printf("b is larger=%d",b);
	return 0;
	
	
	}
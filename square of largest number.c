/* write a c program that will accept three number and print the square of the largest number*/


#include<stdio.h>

int main()
{
	int a,b,c,square,l;     //l->Largest
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Enter 3rd number:");
	scanf("%d",&c);
	// Largest number	
	if(a>b)
	{
		if(a>c)
			l=a;
		else
			l=c;
	}
	else
	{
		if(b>c)
			l=b;
		else
			l=c;
	}
	// square of largest number
	square=l*l;
	// display data
	printf("largest number is: %d \nsquare of largest number is: %d",l,square);
	return 0;
}
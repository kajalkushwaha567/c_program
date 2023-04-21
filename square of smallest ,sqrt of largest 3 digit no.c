
/* write a c program that will accept three number and print the square of smallest number and square root of largest number*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,l,s,sr,sq;      //l-> largest, s->smallest sr->square,sq->square root
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Enter third number");
	scanf("%d",&c);
	
	//smallest number
	if(a<b)	
	{
		if(a<c)
		   s=a;
		 else
		   s=c;
	}
	
	else
	{
		if(b<c)
		  s=b;
		 else
		  s=c;
		
	}
	// largest number
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
	// find the square of smallest number
	sr=s*s;
	//find the square root of largest number
	sq=sqrt(l);
	// display data
	printf("smallest number is : %d \n square of smallest number: %d \n largets number is: %d  \n square root of largest number is: %d",s,sr,sq);
	
	return 0;
}
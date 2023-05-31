/*Write a program to print Fibonacci series of n terms where n is input by user :
0 1 1 2 3 5 8 13 24 ..... */
#include<stdio.h>
int main()
{
	int n,pl,l,c,nn;
	printf("Enter any number:");
	scanf("%d",&n);
	pl=0;
	l=1;
	printf("%d %d",pl,l);
	c=1;
	while(c<=n)
	{
        nn=pl+l; 	
		printf("  %d",nn);
		pl=l;
		l=nn;
		c=c+1;
	}
	return 0;
}

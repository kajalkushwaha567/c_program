/*write a c program  to multiply two fraction number*/
#include<stdio.h>
 int main()
 {
 	int n1,d1,n2,d2,n3,d3,x,y;
 	printf("\nEnter 1st fraction numebr(p/q):");
 	scanf("%d%*c%d",&n1,&d1);
 	//validate entered number
 	if(d1==0)
 	{
 		printf("\nNot a valid number!")	;
 		return 0;
	}
	//if demominator is -ve
	if(d1<0)
	{
		n1=n1*-1;
		d1=d1*-1;
	}
	
	printf("Enter 2nd fraction number(p/q):");
	scanf("%d%*c%d",&n2,&d2);
	//validate entered number
	if(d2==0)
	{
		printf("\nNot a valid number!")	;
 		return 0;
	}
	//if denominator is -ve
	if(d2<0)
	{
		n2=n2*-1;
		d2=d2*-1;
	}
	
	
	n3=(n1*d2);
	d3=(n2*d1);
	
	//print result
	printf("\n%d*%d %d*%d=%d/%d",n1,n2,d1,d2,n3,d3);
	return 0;
 	
 }
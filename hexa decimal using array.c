// c program to find the hexa of any integer number.
#include<stdio.h>
int main()
{
	int rem[32],c,x,n,r,i;
	printf("Enter any number:");
	scanf("%d",&n);
	x=n;
	while(x!=0)
	{
		r=x%16;  
    	rem[c]=r;
		c=c+1;
		x=x/16;
	}
	i=c-1;
	
	if(rem[i]<10)
	printf("%d",rem[i]);
	else if(rem[i]==10)
	 printf("A");
	else if(rem[i]==11)
	printf("B");
	else if(rem[i]==12)
	printf("C");
	else if(rem[i]==13)
	printf("D");
	else if(rem[i]==14)
	printf("E");
	else if(rem[i]==15)
	printf("F");
	
	return 0;
}
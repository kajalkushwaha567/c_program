/* WAP that will check the number is between 50 and 100*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	
	if(n>=50&&n<=100)
	printf("yes");
	else
	printf("no");
	
	return 0;
}
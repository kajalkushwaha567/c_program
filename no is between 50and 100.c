/*WAP that will accept an interger number and check the number is between
 50 and 100 or not.if the number is between 50 and 100 then display yes otherwise no.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	
	if(n>=50)
	{
		if(n<=100)
		printf("yes");
		else
		printf("no");
	}
	else
	printf("no");
	
	return 0;
}
/*WAP which accept any integer number and print number is divisible by 2 or not.
Do anything but don't divide the number by 2 in code.*/
#include<stdio.h>
int main()
{
	int n,up;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		if(up==0||up==2||up==4||up==6||up==8)
		{
			printf(" number is divisible by 2");
		}
		else
		printf("number is not divisible by 3");
	}
	printf("%d",n);
	return 0;
}
//write a program to accept any number and print the value of remainder after dividing it by 3.
#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter any number:");
	scanf("%d",&n);
	rem=n%3;
	printf("rem=%d",rem);
	return 0;
}
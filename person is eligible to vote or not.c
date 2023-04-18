// write a program to check a person is eligble to caste vote or not?
#include<stdio.h>
int main()
{
	int age;
	printf("Enter age of a person :");
	scanf("%d",&age);
	
	if(age>=18)
	printf("person is eligible to vote");
	else
	printf("person is not eligible to vote");
	
	
	return 0;
}
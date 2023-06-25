/*
write a c program in which accept any 10 integer number from user and print the
sum of all entered number*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,sum;
	printf("Enter any ten integer number");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	sum=a+b+c+d+e+f+g+h+i+j;
	printf("sum of integer number %d",sum);
	return 0;
}
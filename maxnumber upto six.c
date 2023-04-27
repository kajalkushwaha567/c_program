/* Write a c program in which accept maximum six digit number and print the total number
of digit entered number has.*/
#include<stdio.h>
int main()
{
	int maxnum;
	printf("Enter maximum number upto six digit");
	scanf("%d",&maxnum);
	 
	 if(maxnum<=9)
	 printf("You have entered %d, it has only one digit",maxnum);
	 else if (maxnum<=99)
	 printf("you have entered %d, it has two digits",maxnum);
	 else if(maxnum<=999)
	 printf("You have entered %d, it has three digits",maxnum);
	 else if(maxnum<=9999)
	 printf("You have entered %d, it has four digits",maxnum);
	 else if(maxnum<=99999)
	 printf("You have entered %d, it has five digits",maxnum);
	 else if(maxnum<=999999)
	 printf("You have entered %d, it has six digits",maxnum);
	 else printf("You have entered %d it has more than six digits");
	 
	 return 0;
}
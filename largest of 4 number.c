/*Draw a flowchart and write a c program to find the largest of four number*/

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
printf("Enter first number=");
scanf("%d",&a);
printf("Enter second number=");
scanf("%d",&b);
printf("Enter third number=");
scanf("%d",&c);
printf("Enter fourth number=");
scanf("%d",&d);

if(a>d)
{
   if(a>c)
   {
     if(a>d)
	 {
	 	printf("%d is largest",a);
	 }
	 else
	 {
	 	printf("%d is largest",d);
	 } 	  
   }
  	
}
else
{
	if(b>c)
	{
		if(b>d)
		{
			printf(" %d is largest",b);
		}
		else
		{
			printf(" %d is largest",d);
		}
	}
	else
	{
		if(c>d)
		{
			printf(" %d is largest",c);
		}
		else
		{
			printf(" %d is largest",d);
		}
	}
	return 0;
}
}
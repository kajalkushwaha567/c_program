/* write a c program that will accept 8 integer number and print the largest number*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 2st number:");
	scanf("%d",&b);
	printf("enter 3rd number:");
	scanf("%d",&c);
	printf("enter 4th number:");
	scanf("%d",&d);
	printf("enter 5th number:");
	scanf("%d",&e);
	printf("enter 6th number:");
	scanf("%d",&f);
	printf("enter 7th number:");
	scanf("%d",&g);
	printf("enter 8st number:");
	scanf("%d",&h);
	if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h)
	printf("%d is largest",a);
	else if(b>c&&b>d&&b>e&&b>f&&b>g&&b>h)
	printf("%d is largest",b);
	else if(c>d&&c>e&&c>f&&c>g&&c>h)
	printf("%d is largest",c);
	else if(d>e&&d>f&&d>g&&d>h)
	printf("%d is largest",d);
	else if(e>f&&e>g&&e>h)
	printf("%d is largest",e);
	else if(f>g&&f>h)
	printf("%d is lagrest",f);
	else if(g>h)
	printf("%d is largest",g);
	else
	printf("%d is largest",h);
    return 0;
}
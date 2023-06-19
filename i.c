/* WAP a c program that will accept principle amount and time,calculate simple interest where rate will be 5% if principle amount is less
than 50000,otherwise 8%*/

#include<stdio.h>

int main()
{
	
	int pa;
	float r;
	int t;
	float si;
	printf("Enter principle amount:");
	scanf("%d",&pa);
	printf("Enter time:");
	scanf("%d",&t);
	printf("Enter rate:");
	scanf("%f",&r);
	
	si=pa*r*t/100;
	if(pa<5000)
	printf("si=pa*5*t/100 %d",pa);
	else
	printf("si=pa*8*t/100 %d",pa);
	
	return 0;
	
}
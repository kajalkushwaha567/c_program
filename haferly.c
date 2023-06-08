/*write a program to calcuate compound interest half yearly*/
#include<stdio.h>
#include<math.h>

int main()
{
	float pa;               /*principle amount*/
	float r;                /*rate of interest*/
	float t;                 /*time*/
	float x;
	float y;
	float z;
	float ci;
	
	printf("Enter principle amount:");
	scanf("%f",&pa);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	
	x=(1+r/200);
	y=pow(x,2*t);
	z=pa*y;
	ci=z-pa;
	
	printf(" compound interest for half yearly=%f",ci);
	return 0;
	
}

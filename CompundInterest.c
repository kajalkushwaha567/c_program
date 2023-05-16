/*write a program to calcuate compound interest quarterly*/
#include<stdio.h>
#include<math.h>
#include<process.h>
int main()
{
	/*variable declaration*/
	
	float pa,r,t,x,y,z,yci,hci,qci;            
	
	printf("Enter principle amount:");
	scanf("%f",&pa);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	/*calculate compound Interest yearly*/
	x=(1+r/100);
	y=pow(x,t);
	z=pa*y;
	yci=z-pa;
	
	/*calculate compound interest half yearly*/
	x=(1+r/200);
	y=pow(x,t*2);
	z=pa*y;
	hci=z-pa;
	
	/*calculate compound interest quarterly*/
	x=(1+r/400);
	y=pow(x,t*4);
	z=pa*y;
	qci=z-pa;
	
	/*display all results*/
	printf("\nCompound Interest yearly=%f",yci);
	printf("\nCompound Interest half yearly=%f",hci);
	printf("\nCompound Interest quaterly=%f",qci);
	printf("\n");
	system("pause");
	
	return 0;
		
}

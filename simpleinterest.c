#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,si;
printf("Enter the value of principal amount:");
scanf("%d",&p);
printf("Enter the value of rate:");
scanf("%d",&r);
printf("Enter the value of time:");
scanf("%d",&t);
si=p*r*t;
printf("\nSimple Interest=%d",si);
getch();
}
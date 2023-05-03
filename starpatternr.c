#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number=");
scanf("%d",&a); 
for(i=1;i<=a;i++)
{
for(j=1;j<=a;j++)
if(i==1 && j<=10 || j==1 || i==3 && j<=10 || i==5 && j<=10 || j==10 && i<=5)
printf("*");
else
printf(" ");
printf("\n");
}
return 0;
}
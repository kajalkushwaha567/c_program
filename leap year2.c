
#include<stdio.h>

int main()
{
	int y,r;
	printf("enter any number:");
    scanf("%d",&y);
    
    r=y%4;
    if(r==0)
    r=y%100;
    else
    printf(" not laep year %d",y);
     

}
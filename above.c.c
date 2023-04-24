
#include<stdio.h>
int main()
{
	int eng,phy,chem,comp,math,num,total;
	printf("Enter marks of english");
	scanf("%d",&eng);
	printf("Enter marks if physics");
	scanf("%d",&phy);
	printf("Enter marks of chemistry");
	scanf("%d",&chem);
	printf("Enter marks of computer");
	scanf("%d",&comp);
	printf("Enter marks of math");
	scanf("%d",&math);
	
	num>=30;
	total=eng+phy+chem+comp+math+num>=50;
	printf(" display result %d %d",num,total);
	
	return 0;
}
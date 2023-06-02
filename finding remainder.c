//finding remainder
#include<stdio.h>
int main()
{
	int dr,no,r;
	printf("Enter the value of number:");
	scanf("%d",&no);
	printf("Enter the value of divisior:");
	scanf("%d",&dr);
	
	while(no>=dr)
	{
	
	 no=no-dr;
}
 
	r=no;


	printf("%d",r);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any 3 number seperate any non digit symbol:");
	scanf("%d%*c%d%*c%d",&a,&b,&c);
	printf("\na=%d,b=%d and c=%d",a,b,c);
	return 0;
}

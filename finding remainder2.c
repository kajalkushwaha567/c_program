//finding remainder and quotent using additive method.
#include<stdio.h>
int main()
{
	int dd,dr,x,q,r;
	printf("Enter the value of dividend:");
	scanf("%d",&dd);
	printf("Enter the value of divisior:");
	scanf("%d",&dr);
	x=0;
	q=0;
	r=0;
	while(x<dd)
	{
		x=x+dr;
		q=q+1;	
	}
	
	if(x!=dd)
	{
		q=q-1;
		r=dd-(x-dr);
	}
	
	printf("Dividend=%d,Divisor=%d then quotent=%d and remainder=%d",dd,dr,q,r);

	return 0;
}
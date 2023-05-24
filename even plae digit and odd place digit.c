/* WAP which accept any integer number and print the sum.
if odd place digit and even place digit.*/
#include<stdio.h>
int main()
{
	int n,x,z=0,even=0,odd=0,upd;    // z->digit position,upd->unit place digit.
	printf("Enter any integer number:");
	scanf("%d",&n);
	x=n;
	while(x!=0)
	{
		upd=x%10;
		z=z+1;
		if(z%2==0)
		even=even+upd;
		else
		odd=odd+upd;
		x=x/10;
	
	}
	printf("you have entered %d.It has total %d digit.The sum of odd place digit is %d and even place digit is%d",n,z,odd,even);
	
}
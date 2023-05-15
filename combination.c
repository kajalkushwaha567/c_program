//WAP that will accept the value of n and r and find the combination.
#include<stdio.h>
int main()
{
	int n,f,c,r,z,x,k,l,y;
	printf("Enter value of n and r:");
	scanf("%d%*c%d",&n,&r);
	// factorial of n
	if(n<0)
	{
		n=n*-1;
	}
	f=1,c=n;
	while(c>0)
	{
		f=f*c;
		c=c-1;
	}
	//factorial of r
	if(r<0)
	{
		r=r*-1;
	}
	k=1,l=r;
	while(l>0)
	{
		k=k*l;
		l=l-1;
	}
	// factorial of n-r
	x=1,y=n-r;
	while(y>0)
	{
		x=x*y;
		y=y-1;
	}
	z=f/x*k;
	printf("nCr =%d/%d*%d",f,x,k,z);
}
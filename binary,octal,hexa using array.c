/* write a c program that will accept an integer
number and print the binary ,octal and hexa of number.*/
#include<stdio.h>
int main()
{
	int x,n,bin[32],tbr=0,i,oct[32],tor=0,hexa[32],thr=0,r,r1,r2;
	printf("Enter any number:");
	scanf("%d",&n);
	x=n;
	//binary
	while(x!=0)
	{
		r=x%2;
		bin[tbr]=r;
		tbr=tbr+1;
		x=x/2;
	}
	//for octal
	x=n;
	while(x!=0)
	{
	
	    r1=x%8;
		oct[tor]=r1;
		tor=tor+1;
		x=x/8;
	}
	//for hexa
	x=n;
	while(x!=0)
	{
	
	r2=x%16;
		hexa[thr]=r2;
		thr=thr+1;
		x=x/16;
	}
	//display binary
	printf("\n Binary:");
	i=tbr-1;
	while(i>=0)
	{
		printf("%d",bin[i]);
		i=i-1;
	}
	
	//display octal
	printf("\n Octal:");
	i=tor-1;
	while(i>=0)
	{
		printf("%d",oct[i]);
		i=i-1;
	}
	//display hexa
    printf("\n hexa:");
    i=thr-1;
    while(i>=0)
	{
		if(hexa[i]<10)
		printf("%d",hexa[i]);
		else
		printf("%c",hexa[i]+55);
		i=i-1;
	}
	printf("\n Thank you");
	return 0;
}
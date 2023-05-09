/* C program  that accept an integer number and print its binary , octal,and hexadecimal*/
#include<stdio.h>
int main ()
{
	int n,x,bin[32],tbr,oct[32],tor,hex[32],thr,i;
	printf("Enter any number:");
	scanf("%d",&n);
	
	//Find binary
	x=n;
	tbr=0;
	while(x!=0)
	{
		bin[tbr++]=x%2;
		x/=2;
		
	}
	//Find octal
	x=n;
	tor=0;
	while(x!=0)
	{
		
		oct[tor++]=x%8;
		x/=8;
	}
	//find hexadecimal
	x=n;
	thr=0;
	while(x!=0)
	{
		hex[thr++]=x%16;
		x/=16;
	}
	//display binary
	printf("\n     Binary:");
	for(i=tbr-1;i>=0;i--)
	printf("%d",bin[i]);
	//display octal
	printf("\n      Octal:");
	for(i=tor-1;i>=0;i--)
	printf("%d",oct[i]);
	//display hexadecimal
	printf("\nHexadecimal:");
	for(i=thr-1;i>=0;i--)
	{
		if(hex[i]<10)
		printf("%d",hex[i]);
		else 
		printf("%c", hex[i]+55);
		
	}
	printf("\n Thank You");
	return 0;
	
	
	
	
}
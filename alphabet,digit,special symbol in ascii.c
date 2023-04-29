/*
Write a C prgram that will accept any symbol and print the entered symbol 
is alphabet, digit or special symbol.
*/
#include<stdio.h>
int main()
{
	char x;
	printf("Enter any symbol:");
	scanf("%c",&x);
	if(x>=65&&x<=90)
	{
		printf("you have entered %c it is an capital alphabet",x);
	}
	else
	{
		if(x>=97&&x<=122)
		{
			printf("you have entered %c it is an small alphabet",x);
		}
		else
		{
			if(x>=48&&x<=57)
			{
				printf("you have entered %c it is an number",x);
			}
			else
			{
				if(x>=32&&x<=47||x>=58&&x<=64)
				{
					printf("you have entered %c it is an special symbol",x);
				}
				else
				{
					if(x>=91&&x<=96||x>=123&&x<=127)
					{
						printf("you have entered %c it is an special symbol",x);
					}
					else
					{
						if(x>=7&&x<=10)
						{
						   printf("you have entered %c it is an special symbol",x);	
						}
						else
						{
							if(x==13)
							printf("you have enetred %c it is an special symbol",x);
						}
					}
				}
			}
		}
	}
	return 0;
}

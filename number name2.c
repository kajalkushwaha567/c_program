/* WAP that will accept one digit number and print number name*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter any nymber(0-9)");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("ZERO");
	}
	else
		if(num==1)
		{
			printf("ONE");
		}
		else
			if(num==2)
			{
				printf("TWO");
			}
			else
				if(num==3)
				{
					printf("THREE");
				}
				else
					if(num==4)
					{
						printf("FOUR");
					}
					else
						if(num==5)
						{
							printf("FIVE");
						}
						else
							if(num==6)
							{
								printf("SIX");
							}
							else
								if(num==7)
								{
									printf("SEVEN");
								}
								else
									if(num==8)
									{
										printf("EIGHT");
									}
									else
										if(num==9)
										{
											printf("NINE");
										}
										else
										
											printf("invalid number! plz enter only one digit number");
	return 0;
}
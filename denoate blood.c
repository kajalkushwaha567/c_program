/* WAP that will accept the age and weight of a person and print the person is eligible to donate blood or not.To donate blood person 
should be 18 to 55 years old his/her weight should be between 45 and 80.kg*/  
#include<stdio.h>
int main()
{
	int age, weight;
	printf("Enter age of person:");
	scanf("%d",&age);
	printf("Enter weight of a person:");
	scanf("%d",&weight);
if(age>=18)
{
	if(age<=55)
	{
		if(weight>=45)
		{
			if(weight<=80)
			{
				printf("person is eligiable to donate blood");
			}
			else
			{
				printf("person is not eligible to donate blood");
			}
		}
		else
		{
			printf(" weight is not greater than or equal to 45");
			printf("\n \n  so.. person is not eligible to donate blood");
		}
	}
	else
	{
		printf(" age is not less than or equal to 55");
		printf(" \n \n so... person is not eligible to donate blood");
	}
}
else
{
	printf("age is not greater than or equal to 18");
	printf("\n \n so.. person is not eligible to donate blood");
}
	return 0;
}
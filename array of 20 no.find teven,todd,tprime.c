/* C program that will accept 20 numbers from user and count total even number, odd number and prime number*/
#include<stdio.h>
#include<process.h>
#define S 20
int main()
{
	int numbers[S],totalEven=0,totalOdd=0,totalPrime=0,isPrime,i,j;
	//accept data from user
	for(i=0;i<S;i++)
	{
		printf("Enter number %d/%d:",i+1,S);
		scanf("%d",&numbers[i]);
	}
	//count even odd and prime numbers
	for(i=0;i<S;i++)
	{
		//check for even odd and prime for numbers[i]
		if(numbers[i]%2==0)
		totalEven++;
		else
		totalOdd++;
		
		//check for prime
		isPrime=1;
		for(j=2;j<=numbers[i]/2;j++)
		{
			if(numbers[i]%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		totalPrime++;
		
		
	}
	
	printf("\n You have entered total %d numbers, In which there are %d even numbers, %d odd numbers and %d prime numbers.",S,totalEven,totalOdd,totalPrime);
	printf("\n");
	system("pause");
	return 0;
	
	
}
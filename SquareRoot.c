/* Finding square root in C
-------------------------------
sqrt()->this function is used to find the square root of any number
this function accepts an argument and returns the square root of given argument
*/
#include<stdio.h>
#include<math.h>
int main()
{
	/* variable declaration*/
	float n,sr;
	printf("Enter any number: ");
	scanf("%f",&n);
	/*find the square root of n*/
	sr=sqrt(n);
	printf("\nSquare root=%f",sr);
	return 0;
	
}
/* C program to search in array
-------------------------------------------
Linear Search
*/
#include<stdio.h>
int main()
{
	int rolls[20]={1,5,2,3,9,6,45,78,12,40,89,26,53,21,15,76,69,44,85,79};
	int sroll,i;
	printf("Enter roll number to search:");
	scanf("%d",&sroll);
	//code for search (Linear search)
	for(i=0;i<20;i+=1)
	{
		if(rolls[i]==sroll)
		break;
	}
	
	if(i<20)
	{
		printf("%d is available in list at index %d",sroll,i);
	}
	else
	{
		printf("%d is not available in list",sroll);
	}
	return 0;
}

/*
Write a C program in which accept any 30  number in an array.
 again accept an another number and find the frequency of last entered number in list.
*/
/*
for(i=0;i<5;i+=1);
printf("\n%d",i);


int i=54;
if(i==5)



;
printf("Hello");

*/


	
	
	
	
	

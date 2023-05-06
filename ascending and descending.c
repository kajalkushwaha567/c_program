/* 
Write a C program in which accept any 25 numbers from user. print all entered number in 
ascending order. print all number in descending order and at last print all numbers as entered. 
*/
#include<stdio.h>
#include<process.h>
# define S 5
int main()
{
	int data[S],i,j,temp,dataCopy[S];
	for(i=0;i<S;i++)
	{
		printf("enter number %d/%d:",i+1,S);
        scanf("%d",&data[i]);
    }
    /* copy data in dataCopy*/
    for(i=0;i<S;i++) dataCopy[i]=data[i];
	//code for sort(Linear sort) /
	// Ascending Order /
	for(i=0;i<S-1;i++)
	{
		for(j=i+1;j<S;j++)
		{
			if(data[i]>data[j])
			{
				//swap data[i] with data[j]
				temp=data[i];
                data[i]=data[j];
                data[j]=temp;
			}
		}
	}

	printf("\n Data in ascending order is : \t");
	//Ascending order
    for(i=0;i<S;i++)
    {
    	printf("%d",data[i]);
    	if(i<S-2)
        printf(", ");
        else if(i==S-2)
        printf(" and ");
        else
        printf(" |");
	}
	printf("\n Data in descending order is : \t");
	//Descending Order
	for(i=S;i>0;i--)
    {
    	printf("%d",data[i-1]);
    	if(i>S-2)
        printf(", ");
        else if(i==S-2)
        printf(" and ");
        else
        printf(" :) ");
	}
	printf("\n Data entered by you: ");
	for(i=0;i<S;i++)
	{
		printf("%d",dataCopy[i]);
		if(i<S-2)
        printf(", ");
        else if(i==S-2)
        printf(" and ");
        else
        printf(" |");
	}
    printf("\nThank you\n");
    system("pause");
    return 0;
}
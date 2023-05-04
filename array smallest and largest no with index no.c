/*
C program to accept 10 numbers from user and print the smallest and largest number
*/
#include<stdio.h>
#include<process.h>
int main()
{
    int numbers[10],i,largestNumber,smallestNumber;
    printf("Wel Come\n");
    //accept 10 numbers from user
    for(i=0;i<10;i++)
    {
        printf("Enter number %d/10:",i+1);
        scanf("%d",&numbers[i]);
    }

    //find largest number in list
    //let the first number of list is largest number
    largestNumber=0;
    //now traverse the list from 1 to end and compare largestNumber element from each element
    for(i=1;i<10;i++)
    {
        if(numbers[i]>numbers[largestNumber])
        {
            //make  i largest
            largestNumber=i;
        }
    }

//find the smallest number
//let the first number is smallest
smallestNumber=0;
//now traverse the list from 1 to end and compare smallestNumber from each element of list
for(i=1;i<10;i++)
{
    if(numbers[i]<numbers[smallestNumber])
    {
        smallestNumber=i;
    }
}


//print all eneterd data
printf("\nAll Entered numbers are:");
for(i=0;i<10;i++)
printf("%d, ",numbers[i]);

printf("\nThe smallest number is %d at index %d and largest number is %d at index %d",numbers[smallestNumber],smallestNumber,numbers[largestNumber],largestNumber);
printf("\n");
system("pause");
    return 0;
}
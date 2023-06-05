/* Write a C program in which accept any 30  numbers in an array. again accept an another number are find the frequency
of last entered number in list.     */
#include<stdio.h>
#include<process.h>
#define SZ 30
int main()
{
    int arr[SZ],i,a,frequency,counter=0;
    // accept numbers.
    for(i=0;i<SZ;i++) 
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    // input another number again.
    printf("Enter another number : ");
    scanf("%d",&a);
        system("cls");
    //Code for find frequency (Linear Search)
    // Display number and find frequency.
    printf("All entered numbers :");
    frequency=0;
    for(i=0;i<SZ;i++)
    {
        printf("%d",arr[i]);
        if(i<SZ-2)
            printf(", ");
        else if(i==SZ-2)
            printf(" and ");
        if(arr[i]==a)
            frequency+=1;
    }   printf("\n");
    //Display frequency and index number.
    printf("\nFrequency of %d = %d. At index number ",a,frequency);
    for(i=0;i<SZ;i++)
    {
        if(arr[i]==a)
        {
            counter+=1;
            printf("%d",i);
            if(counter<=frequency-2)
                printf(", ");
            else if(counter==frequency-1)
                printf(" and ");
        }
    }
    printf("\n\n\tThank You\n");
    system("pause");
    return 0;
}
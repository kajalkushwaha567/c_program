/*C program that will accept 20 values from user and print all entered values and distinct values*/
#include<stdio.h>
#define SZ 20
int main()
{
    int list[SZ],distinctList[SZ],totalDistinct=0,i,j,found;
    /* accept numbers from user*/
    for(i=0;i<SZ;i++)
    {
        printf("Enter number %d/%d:",i+1,SZ);
        scanf("%d",&list[i]);
    }
   // find all distinct numbers 
    for(i=0;i<SZ;i++)
    {
        //find i(th) position number of list is available in distinctList or not
         found=0;
         for(j=0;j<totalDistinct;j++)
         {
             if(list[i]==distinctList[j])
             {
                 found=1;
                 break;
             }
         }

        //if not found then add it to distinct list at last
        if(found==0)
        {
        distinctList[totalDistinct]=list[i];
        totalDistinct++;
        }
    }

    //print 
    //Print original list
    printf("Entered array is:");
    for(i=0;i<SZ;i++)
    printf("%d, ",list[i]);

    //print distinct array
    printf("\n\nDistinct array is:");
    for(i=0;i<totalDistinct;i++)
    printf("%d, ",distinctList[i]);

    printf("\n");
    system("pause");
    return 0;
}
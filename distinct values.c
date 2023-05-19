/* Write a C program in which accept any 20 numbers from user and print all DISTINCT 
values in Ascending order. */
#include<stdio.h>
#include<process.h>
#define S 25
int main()
{
	int data[S],i,j,f,distinctList[S],totalDistinct=0,number,temp;
    for(i=0;i<S;i++)
    {
       printf("enter number %d/%d:",i+1,S);
       scanf("%d",&data[i]);
    }
    number=data[0];
    // find all distinct numbers 
    for(i=0;i<S;i++)
    {
        //find i(th) position number of list is available in distinctList or not
         f=0;
         for(j=0;j<totalDistinct;j++)
         {
             if(data[i]==distinctList[j])
             {
                 f++;
   
             }
         }

        //if not found then add it to distinct list at last
        if(f==0)
        {
        distinctList[totalDistinct]=data[i];
        totalDistinct++;
        }
    }
    // sorting for all Distinct number /
    for(i=0;i<S-1;i++)
    {
       for(j=i+1;j<S;j++)
       {
          if(distinctList[i]>distinctList[j])
          {
             //swap data[i] with data[j]
             temp=distinctList[i];
             distinctList[i]=distinctList[j];
             distinctList[j]=temp;
          }
       }
    }
    //Print original list
    printf("Entered array is:");
    for(i=0;i<S;i++)
    printf("%d, ",data[i]);
    printf("\n \t Distinct Number");
    //print distinct array
    for(i=0;i<totalDistinct;i++)
    printf("\n\n %d",distinctList[i]);
    printf("\n");
    system("pause");
    return 0;
}
  
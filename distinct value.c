/* Write a C program in which accept any 25 numbers from user and print all DISTINCT values 
in Ascending order and also print the frequency of all distinct values. */
#include<stdio.h>
#include<process.h>
#define S 10
int main()
{
	int data[S],i,j,f,distinctList[S],totalDistinct=0,number,temp,frequency[S]={0};
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
    
    //find  frequency
    for(i=0;i<totalDistinct;i++)
    {
        //find the frequency of distinctList[i] and store it in frequency[i]
        for(j=0;j<S;j++)
		{
			if(distinctList[i]==data[j])
			frequency[i]++;
		}
    }
    // Sorting for all Distinct Number /
    for(i=0;i<totalDistinct-1;i++)
    {
       for(j=i+1;j<totalDistinct;j++)
       {
          if(distinctList[i]>distinctList[j])
          {
             //swap distinctList[i] with distinctList[j]
             temp=distinctList[i];
             distinctList[i]=distinctList[j];
             distinctList[j]=temp;
             //swap frequency[i] with frequency[j]
             temp=frequency[i];
             frequency[i]=frequency[j];
             frequency[j]=temp;
          }
       }
    }
    //Print original list
    printf("Entered array is:");
    for(i=0;i<S;i++)
    printf("%d, ",data[i]);
    printf("\n Distinct Number \t Frequency number ");
    // print frequency
    for(i=0;i<totalDistinct;i++)
    {
        printf("\n%6d\t",distinctList[i]);
        printf("\t (%d)",frequency[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
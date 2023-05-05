/* write a c program in which accept any 10 numbers in an array.print the 
content of array.swap the smallest and largest number in array and again 
print the content of array.
ex:- 12,45,67,3,12,5,8
after swap array content is:
12,45,3,67,12,5,8
*/
#include<stdio.h>
int main()
{
	int arr[10],i,largestno,smallestno,z,x,y;
	
	for(i=0;i<10;i++)
	{
		printf("Enter number %d/10: ",i+1);
		scanf("%d",&arr[i]);
	}
	//largest
	largestno=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>largestno)
		{
			largestno=arr[i];
		}
	 	
	}
	//smallest
	smallestno=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]<smallestno)
		{
		  smallestno=arr[i];	
		}
	}
	//print all eneterd data
printf("\nAll Entered numbers are:");
for(i=0;i<10;i++)
printf("%d, ",arr[i]);

printf("\nThe largest number is %d and smallest number is %d",largestno,smallestno);	
// swapping
  	z=largestno;
  	x=smallestno;
  	y=z;
  	 
  	
  	printf("\n after swapping the number is:");
  	for(i=0;i<10;i++)
  	printf("%d ",arr[i]);

  	return 0;
}
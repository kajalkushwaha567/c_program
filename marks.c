/* write a c program which accept the marks of 5 subject of any student and print all entered marks,total marks,obtained percentge marks 
and result.result will be pass or fail,if student obtain>=50% marks then he/she is pass otherwisw fail*/
#include<stdio.h>

int main()
{
	int eng,math,comp,hindi,science,sum,per;
	printf("Enter marks of english:");
	scanf("%d",&eng);
	printf("Enter marks of math:");
	scanf("%d",&math);
	printf("Enter marks of computer:");
	scanf("%d",&comp);
	printf("Enter marks of hindi:");
	scanf("%d",&hindi);
	printf("Enter marks of science:");
	scanf("%d",&science);
	
	sum=eng+math+comp+hindi+science;
	printf("\n total marks is:%d",sum);
	per=(eng+math+comp+hindi+science)/5;
	printf(" \n percentage is: %d",per);
	if(per>=50)
	printf("\n student is pass");
	else
	printf("\n student is fail");
	return 0;
}
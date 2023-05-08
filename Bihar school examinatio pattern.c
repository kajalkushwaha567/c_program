/*
Write a C program in which Accept name,father's name, mother's name,dob, gender,rollcode,roll number and marks of 5 matric subject
and print the result in Following Format:

Bihar School Examination Board, Patha
      Secondary Exam -2022
============================================
Name: Mr/Miss XXXXXXXXXXXXX
Mother's Name: Mrs XXXXXXXXXXXXXX
Father's Name: Mr. XXXXXXXXXXXXXX
Roll Code:23010
Roll No:22001001
================================================
		Marks Details
===============================================
Sub Name	Full Marks	Pass Marks	Obtained Marks
Hindi		100			30			88 D - Eight Eight
Math		100			30			27 F - Two Seven
Sciecne		100			30			35   - Three Five



==================================================
					Total		xxxx - Digit digit Digit
					percentage  XX.XX%
					Division	1st/2nd/3rd/FAIL
					
*/
#include<stdio.h>
#include<process.h>
int main()
{
	char name[50],mn[90],fn[80];
	int rollcode,rollno,d,o,b,gender,eng,math,comp,hindi;
	int science,i,j,k,sum,per,passInAll,num,u,t;
   
   printf("Enter Name:");
   gets(name);
   for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=97&&name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
   printf("Enter Mother's name:Mrs.");
   gets(mn);
   for(j=0;mn[j]!='\0';j++)
	{
		if(mn[j]>=97&&mn[j]<=122)
		{
		    mn[j]=mn[j]-32;
		}
	}
   printf("Enter Father's name:Mr.");
   gets(fn);
   for(k=0;fn[k]!='\0';k++)
	{
		if(fn[k]>=97&&fn[k]<=122)
		{
			fn[k]=fn[k]-32;
		}
	}
   printf("Enter DOB(dd/mm/yyyy):");
   scanf("%d/%d/%d",&d,&o,&b);
   printf("Enter Gender(male=0,female=1):");
   scanf("%d",&gender);
   printf("Enter Rollcode:");
   scanf("%d",&rollcode);
   printf("Enter Rollno:");
   scanf("%d",&rollno);
   printf("Enter marks of English:");
   scanf("%d",&eng);
   printf("Enter marks of Math:");
   scanf("%d",&math);
   printf("Enter marks of Computer:");
   scanf("%d",&comp);
   printf("Enter marks of Hindi:");
   scanf("%d",&hindi);
   printf("Enter marks of Science:");
   scanf("%d",&science);
   /*Find total and percentage marks*/
   sum=eng+math+comp+hindi+science;
   per=sum/5.0;
   
    passInAll=1;
	if(hindi<30)
	passInAll=0;
	
	if(eng<30)
	passInAll=0;
	
	if(math<30)
	passInAll=0;
	
	if(science<30)
	passInAll=0;
	
	if(comp<30)
	passInAll=0;
    
		
	// print result
	printf("\n\n\t\tBihar School Examination Board, Patna Secondary Exam -2022");
	printf("\n================================================================================");
	printf("\nName:%s",name);
	printf("\nMother's name:Mrs.%s",mn);
	printf("\nFather's name:Mr.%s",fn);
	printf("\nRoll code:%d",rollcode);
	printf("\nRoll no:%d",rollno);
	printf("\n================================================================================");
	printf("\n\t\t marks details");
	printf("\n================================================================================");
	printf("\nsubject     full marks     pass marks     obtained marks");
	printf("\nEnglish       100             30             %d",eng);
	if(eng>75)
	printf(" D - ");
	else if(eng<30)
	printf(" F - ");
	else printf("   - ");
	
	if(eng>=0&&eng<=19)
	{
	if(eng==0)
	printf("Zero ");
	else if(eng==1)
	printf("One ");
	else if(eng==2)
	printf("Two ");
	else if(eng==3)
	printf("Three ");
	else if(eng==4)
	printf("Four ");
	else if(eng==5)
	printf("Five ");
	else if(eng==6)
	printf("Six ");
	else if(eng==7)
	printf("Seven ");
	else if(eng==8)
	printf("Eight ");
	else if(eng==9)
	printf("Nine ");
	else if(eng==10)
	printf("Ten ");
	else if(eng==11)
	printf("Eleven ");
	else if(eng==12)
	printf("Twelve ");
	else if(eng==13)
	printf("Thirteen ");
	else if(eng==14)
	printf("Fourteen ");
	else if(eng==15)
	printf("Fifteen ");
	else if(eng==16)
	printf("Sixteen ");
	else if(eng==17)
	printf("Seventeen ");
	else if(eng==18)
	printf("Eighteen ");
	else if(eng==19)
	printf("Nineteen ");
	}
	else
	{
		u=eng%10;
		t=eng/10;
		if(t==2)
		printf(" Twenty ");
		else if(t==3)
		printf(" Thirty ");
		else if(t==4)
		printf(" Forty ");
		else if(t==5)
		printf(" Fifty ");
		else if(t==6)
		printf(" Sixty ");
		else if(t==7)
		printf(" Seventy ");
		else if(t==8)
		printf(" Eighty ");
		else
		printf(" Ninty ");
		
		if(u==1)
		printf("One ");
		else if(u==2)
		printf("Two ");
		else if(u==3)
		printf("Three ");
		else if(u==4)
		printf("Four ");
		else if(u==5)
		printf("Five ");
		else if(u==6)
		printf("Six ");
		else if(u==7)
		printf("Seven ");
		else if(u==8)
		printf("Eight ");
		else if(u==9)
		printf("Nine ");
    }	
	printf("\nMath          100             30             %d",math);
	if(math>75)
	printf(" D - ");
	else if(math<30)
	printf(" F - ");
	else printf("   - ");
	
	if(math>=0&&math<=19)
	{
	if(math==0)
	printf("Zero ");
	else if(math==1)
	printf("One ");
	else if(math==2)
	printf("Two ");
	else if(math==3)
	printf("Three ");
	else if(math==4)
	printf("Four ");
	else if(math==5)
	printf("Five ");
	else if(math==6)
	printf("Six ");
	else if(math==7)
	printf("Seven ");
	else if(math==8)
	printf("Eight ");
	else if(math==9)
	printf("Nine ");
	else if(math==10)
	printf("Ten ");
	else if(math==11)
	printf("Eleven ");
	else if(math==12)
	printf("Twelve ");
	else if(math==13)
	printf("Thirteen ");
	else if(math==14)
	printf("Fourteen ");
	else if(math==15)
	printf("Fifteen ");
	else if(math==16)
	printf("Sixteen ");
	else if(math==17)
	printf("Seventeen ");
	else if(math==18)
	printf("Eighteen ");
	else if(math==19)
	printf("Nineteen ");
	}
	else
	{
		u=math%10;
		t=math/10;
		if(t==2)
		printf(" Twenty ");
		else if(t==3)
		printf(" Thirty ");
		else if(t==4)
		printf(" Forty ");
		else if(t==5)
		printf(" Fifty ");
		else if(t==6)
		printf(" Sixty ");
		else if(t==7)
		printf(" Seventy ");
		else if(t==8)
		printf(" Eighty ");
		else
		printf(" Ninty ");
		
		if(u==1)
		printf("One ");
		else if(u==2)
		printf("Two ");
		else if(u==3)
		printf("Three ");
		else if(u==4)
		printf("Four ");
		else if(u==5)
		printf("Five ");
		else if(u==6)
		printf("Six ");
		else if(u==7)
		printf("Seven ");
		else if(u==8)
		printf("Eight ");
		else if(u==9)
		printf("Nine ");
    }
	
	printf("\nComputer      100             30             %d",comp);
	if(comp>75)
	printf(" D - ");
	else if(comp<30)
	printf(" F - ");
	else printf("   - ");
	
	if(comp>=0&&comp<=19)
	{
	if(comp==0)
	printf("Zero ");
	else if(comp==1)
	printf("One ");
	else if(comp==2)
	printf("Two ");
	else if(comp==3)
	printf("Three ");
	else if(comp==4)
	printf("Four ");
	else if(comp==5)
	printf("Five ");
	else if(comp==6)
	printf("Six ");
	else if(comp==7)
	printf("Seven ");
	else if(comp==8)
	printf("Eight ");
	else if(comp==9)
	printf("Nine ");
	else if(comp==10)
	printf("Ten ");
	else if(comp==11)
	printf("Eleven ");
	else if(comp==12)
	printf("Twelve ");
	else if(comp==13)
	printf("Thirteen ");
	else if(comp==14)
	printf("Fourteen ");
	else if(comp==15)
	printf("Fifteen ");
	else if(comp==16)
	printf("Sixteen ");
	else if(comp==17)
	printf("Seventeen ");
	else if(comp==18)
	printf("Eighteen ");
	else if(comp==19)
	printf("Nineteen ");
	}
	else
	{
		u=comp%10;
		t=comp/10;
		if(t==2)
		printf(" Twenty ");
		else if(t==3)
		printf(" Thirty ");
		else if(t==4)
		printf(" Forty ");
		else if(t==5)
		printf(" Fifty ");
		else if(t==6)
		printf(" Sixty ");
		else if(t==7)
		printf(" Seventy ");
		else if(t==8)
		printf(" Eighty ");
		else
		printf(" Ninty ");
		
		if(u==1)
		printf("One ");
		else if(u==2)
		printf("Two ");
		else if(u==3)
		printf("Three ");
		else if(u==4)
		printf("Four ");
		else if(u==5)
		printf("Five ");
		else if(u==6)
		printf("Six ");
		else if(u==7)
		printf("Seven ");
		else if(u==8)
		printf("Eight ");
		else if(u==9)
		printf("Nine ");
    }
	printf("\nHindi        100             30             %d",hindi);
	if(hindi>75)
	printf(" D - ");
	else if(hindi<30)
	printf(" F - ");
	else printf("   - ");
	
	if(hindi>=0&&hindi<=19)
	{
	if(hindi==0)
	printf("Zero ");
	else if(hindi==1)
	printf("One ");
	else if(hindi==2)
	printf("Two ");
	else if(hindi==3)
	printf("Three ");
	else if(hindi==4)
	printf("Four ");
	else if(hindi==5)
	printf("Five ");
	else if(hindi==6)
	printf("Six ");
	else if(hindi==7)
	printf("Seven ");
	else if(hindi==8)
	printf("Eight ");
	else if(hindi==9)
	printf("Nine ");
	else if(hindi==10)
	printf("Ten ");
	else if(hindi==11)
	printf("Eleven ");
	else if(hindi==12)
	printf("Twelve ");
	else if(hindi==13)
	printf("Thirteen ");
	else if(hindi==14)
	printf("Fourteen ");
	else if(hindi==15)
	printf("Fifteen ");
	else if(hindi==16)
	printf("Sixteen ");
	else if(hindi==17)
	printf("Seventeen ");
	else if(hindi==18)
	printf("Eighteen ");
	else if(hindi==19)
	printf("Nineteen ");
	}
	else
	{
		u=hindi%10;
		t=hindi/10;
		if(t==2)
		printf(" Twenty ");
		else if(t==3)
		printf(" Thirty ");
		else if(t==4)
		printf(" Forty ");
		else if(t==5)
		printf(" Fifty ");
		else if(t==6)
		printf(" Sixty ");
		else if(t==7)
		printf(" Seventy ");
		else if(t==8)
		printf(" Eighty ");
		else
		printf(" Ninty ");
		
		if(u==1)
		printf("One ");
		else if(u==2)
		printf("Two ");
		else if(u==3)
		printf("Three ");
		else if(u==4)
		printf("Four ");
		else if(u==5)
		printf("Five ");
		else if(u==6)
		printf("Six ");
		else if(u==7)
		printf("Seven ");
		else if(u==8)
		printf("Eight ");
		else if(u==9)
		printf("Nine ");
    }
	printf("\nScience       100             30             %d",science);
	if(science>75)
	printf(" D - ");
	else if(science<30)
	printf(" F - ");
	else printf("   - ");
	
	if(science>=0&&science<=19)
	{
	if(science==0)
	printf("Zero ");
	else if(science==1)
	printf("One ");
	else if(science==2)
	printf("Two ");
	else if(science==3)
	printf("Three ");
	else if(science==4)
	printf("Four ");
	else if(science==5)
	printf("Five ");
	else if(science==6)
	printf("Six ");
	else if(science==7)
	printf("Seven ");
	else if(science==8)
	printf("Eight ");
	else if(science==9)
	printf("Nine ");
	else if(science==10)
	printf("Ten ");
	else if(science==11)
	printf("Eleven ");
	else if(science==12)
	printf("Twelve ");
	else if(science==13)
	printf("Thirteen ");
	else if(science==14)
	printf("Fourteen ");
	else if(science==15)
	printf("Fifteen ");
	else if(science==16)
	printf("Sixteen ");
	else if(science==17)
	printf("Seventeen ");
	else if(science==18)
	printf("Eighteen ");
	else if(science==19)
	printf("Nineteen ");
	}
	else
	{
		u=science%10;
		t=science/10;
		if(t==2)
		printf(" Twenty ");
		else if(t==3)
		printf(" Thirty ");
		else if(t==4)
		printf(" Forty ");
		else if(t==5)
		printf(" Fifty ");
		else if(t==6)
		printf(" Sixty ");
		else if(t==7)
		printf(" Seventy ");
		else if(t==8)
		printf(" Eighty ");
		else
		printf(" Ninty ");
		
		if(u==1)
		printf("One ");
		else if(u==2)
		printf("Two ");
		else if(u==3)
		printf("Three ");
		else if(u==4)
		printf("Four ");
		else if(u==5)
		printf("Five ");
		else if(u==6)
		printf("Six ");
		else if(u==7)
		printf("Seven ");
		else if(u==8)
		printf("Eight ");
		else if(u==9)
		printf("Nine ");
    }
	printf("\n================================================================================");
	printf("\n\t\tTotal: %d",sum);
	printf("\n\t\tPercentage: %d",per);
	printf("\n\t\tDivision:");
	if(passInAll==1)
	{
		if(per>=60)
		printf("FIRST");
		else
		{
			if(per>=45)
			printf("SECOND");
			else
			{
			    if(per>=30)
			    printf("THIRD");
			}
			
		}
	}
	else
	printf("FAIL");
	printf("\n===============================================================================");
	
	printf("\nThank You");
	printf("\n");
	return 0;
	
	
}
		
	
		
		
   
   
   
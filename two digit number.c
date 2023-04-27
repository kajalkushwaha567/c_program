/* WAP that will acept two digit number and print the number in words*/
#include<stdio.h>
int main()
{
	int num,tpd,upd;
	printf("enter any number(10-99)");
	scanf("%d",&num);
	
	
	
	if(num==10)
	printf("TEN");
	else
	if(num==11)
	printf("ELEVEN");
	else
	if(num==12)
	printf("TWELVE");
	else
	if(num==13)
	printf("THIRTEEN");
	else
	if(num==14)
	printf("FOURTEEN");
	else
	if(num==15)
	printf("FIFTEEN");
	else
	if(num==16)
	printf("SIXTEEN");
	else
	if(num==17)
	printf("SEVENTEEN");
	else
	if(num==18)
	printf("EIGHTEEN");
	else
	if(num==19)
	printf("NINETEEN");
	else
	{
	
	tpd=num/10;
	
	if(tpd==2)
	printf("TWENTY");
	else
	if(tpd==3)
	printf("THIRTY");
	else
	if(tpd==4)
	printf("FORTY");
	else
	if(tpd==5)
	printf("FIFTY");
	else
	if(tpd==6)
	printf("SIXTY");
	else
	if(tpd==7)
	printf("SEVENTY");
	else
	if(tpd==8)
	printf("EIGHTY");
	else
	printf("NINETY");
	
	upd=num%10;
	if(upd==1)
	printf(" ONE ");
	else
	if(upd==2)
	printf(" TWO ");
	else
	if(upd==3)
	printf(" THREE ");
	else
	if(upd==4)
	printf(" FOUR ");
	else
	if(upd==5)
	printf(" FIVE ");
	else
	if(upd==6)
	printf(" SIX ");
	else
	if(upd==7)
	printf(" SEVEN ");
	else
	if(upd==8)
	printf(" EIGHT ");
	else 
	if(upd==9)
	printf("NINE");
}
	return 0;
}

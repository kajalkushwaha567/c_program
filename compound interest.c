#include<stdio.h>
#include<math.h>

int main()
{
    float ci;                       /*coumpound interest*/
    float pv;                               /* present value*/
    float r;                         /* rate of interest*/
    float time;                               /*time */
    
    printf(" enter present value");
    scanf("%f,&pv");
    printf("enter rate of interest");
    scanf("%f,&r");
    printf("enter time");
    scanf("%f,&time");

    ci= pv*pow((1+r/100),time);
    

    printf("coumpound interest = %f",ci);
    return 0;
}

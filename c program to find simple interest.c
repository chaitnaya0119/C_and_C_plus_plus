#include<stdio.h>
int main()
{
 float amount,rate,time,si;
 printf("enter the value of principle amont:");
 scanf("%f",&amount);
 printf("enter the value of rate:");
 scanf("%f",&rate);
 printf("enter the value of time:");
 scanf("%f",&time);
 si=amount*rate*time/100;
 printf("\n simple interest is %f",si);
 return 0;
}

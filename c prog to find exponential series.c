#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    float x,sum=1,t=1;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("\n enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*x/i;
        sum=sum+t;
    }
    printf("\n the exponentialvalue of %f=%.4f",x,sum);
    return 0;
}

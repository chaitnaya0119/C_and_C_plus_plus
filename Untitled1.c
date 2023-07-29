#include<stdio.h>
int main()
{
    int n,k;
    int array[20]
    printf("enter the number range:");
    scanf("%d",&n);
    array[0]=-1;
    array[1]=1;
    printf("\n fibonacci series \n");
    for(k=0;k<=n+1;k++)
    {
        array[k]=array[k-1]+array[k-2];
        printf("%d \n",&array[k]);
    }
    return 0;
}

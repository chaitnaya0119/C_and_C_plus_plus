#include<stdio.h>
#include<conio.h>
int fibno(int);
void main()
{
 int ct,n,disp;
 printf("enter the no. of terms:");
 scanf("%d",&n);
 printf("\n the fibonocci series:\n");
 for(ct=0;ct<=n-1;ct++)
 {
  disp= fibno(ct);
  printf("%5d",disp);
 }
 getch();
}
int fibno(int n)
{
 int x,y;
 if(n==0)
 return 0;
 else if (n==1)
 return 1;;

 {
  return fibno (n-1)+fibno(n-2);
 }
}

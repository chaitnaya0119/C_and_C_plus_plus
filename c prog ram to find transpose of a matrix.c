#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],b[10][10];
 int i,j,r,c;
 printf("enter order of matrix\n");
 scanf("%d %d",&r,&c);
 printf("enter the elements\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
  printf("enter [%d][%d] element",i,j);
  scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<c;i++)
 {
 for(j=0;j<r;j++)
 {
  b[j][i]=a[i][j];
 }
 }
 printf("\n\n the transpose of the matrix is \n");
 for(i=0;i<c;i++)
 {
  for(j=0;j<r;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
  getch();
}

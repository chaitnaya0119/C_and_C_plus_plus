#include<stdlib.h>
#include<stdio.h>
 main()
{
  int i,j;
  float a[100],temp;
  printf("Rndom numbers in the range of 10.0 to 20.0\n\n");
  for(i=0;i<=100;i++)
  {
    a[i]=10+rand()/32767.0+random(10);
    printf("%.2f\t",a[i]);
  }
   for(i=0;i<99;i++)
   {
    for(j=i+1;j<100;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }
   printf("Sorting order \n\n");
   for(i=0;i<100;i++)
   printf("%.2f\t",a[i]);
   getch();
}

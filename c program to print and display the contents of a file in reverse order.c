#include<stdio.h>
main()
{
int n=1,i;
char c;
FILE *fp;
fp=fopen("fl.txt","r");
while((c=getc(fp))!=EOF);
i=ftell(fp);
fseek(fp,-n,2);
while(i>=0)
{
 c=getc(fp);
 n++;
 i--;
 fseek(fp,-n,2);
}
getch();
}

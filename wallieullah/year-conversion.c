#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
int main()
{
int a,b,c,d,c1,c2,e;
while(scanf("%d",&a)!=EOF)
{
if(a>30)
{
b=a/365;
c=a-365;
d=c/30;
e=c-30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,d,e);
}
else
{
b=a/365;
c1=a/30;
c2=30-a;
printf("%d ano(s)\n %d mes(es)\n %d dia(s)\n",b,c1,c2);
}
}
return 0;
}

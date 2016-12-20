#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
//#include<graphics.h>
int main()
{
int n,t,i;
scanf("%d",t);
for(i=0;i<=t;i++)
{
scanf("%d",&n);
if((n%2)==0)
{
printf("YES\n");
}
else
printf("NO\n");
}
return 0;
}


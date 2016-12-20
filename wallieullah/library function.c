#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<malloc.h>
int main()
{
int t,a,e,s1=0,i,s2,j;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%d",&e);
if(e<0)
e=0;
s1+=e;
}
printf("Case %d: %d\n",j,s1);
s1=0;
}
return 0;
}

#include<stdio.h>
main()
{
int i=0,j,n,T;
char name[200];
scanf("%d",&T);
if(1<=T&&T<=1000)
{
for(n=0;n<T;++n)
{
scanf("%s",name);
if(strlen(name)<=200)
{
printf("Case %d:\n",n+1);
for(i=0;i<strlen(name);++i)
{
for(j=0;j<=i;++j)
{
printf("%c",name[j]);
}
printf("\n");
}
}
}
}
}

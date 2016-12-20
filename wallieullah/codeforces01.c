#include<stdio.h>
int main()
{
int T,a,b,c,d=0,i;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d%d%d",&a,&b,&c);
if(a+b+c>1)
{
d++;
}
}
printf("%d",d);
return 0;
}

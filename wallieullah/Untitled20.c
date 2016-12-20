#include<stdio.h>
int main()
{
int a,b,T,i,c;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d %d",&a,&b);
if(a<=10 && b<=10)
{
c=a+b;
printf("case %d: %d",i,c);
}
}
return 0;
}

#include<stdio.h>
int main()
{
int a,b,c;
while(scanf("%d%d%d",&a,&b,&c)!=EOF)
{
if(a>b && a>c)
{
printf("%d rh o maior",a);
}
else if(b>a && b>c)
{
printf("%d rh o maior",b);
}
else
{
printf("%d rh o maior",c);
}
}
return 0;
}

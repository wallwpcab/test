#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,x,t,y,gcd;
printf("enter two integers numbers:\n");
scanf("%d%d",&a,&b);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
gcd=a;
}
printf("%d",gcd);
return 0;
}

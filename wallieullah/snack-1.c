#include<stdio.h>
#include<math.h>
int main()
{
long int a,b,mul,T;
scanf("%d",&T);
while(T--)
{
scanf("%ld%ld",&a,&b);
if(a<=pow(4,10) || b<=pow(4,10))
{
mul=a*b;
printf("%ld\n",mul);
}
else
{
break;
}
}
return 0;
}


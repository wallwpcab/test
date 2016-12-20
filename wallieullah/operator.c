#include<stdio.h>
int main()
{
int a,b,sum,sim,mod,div,mul;
char d;
while(scanf("%c%d%d",&d,&a,&b)!=EOF)
{
if(d == '+' )
{
sum=a+b;
printf("%d\n",sum);
break;
}
else if(d == '-')
{
sim=a-b;
printf("%d\n",sim);
break;
}
else if(d == '%' )
{
mod=a%b;
printf("%d\n",mod);
break;
}
else if(d =='/' )
{
div=a/b;
printf("%d\n",div);
break;
}
else if(d =='*')
{
mul=a*b;
printf("%d\n",mul);
break;
}
{
printf("nothing");
}
}
return 0;
}

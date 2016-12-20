#include<stdio.h>
int main()
{
int a,b,c,s1,s2;
while(scanf("%d %d %d",&a,&b,&c)!=EOF)
{
s1=(a+b+abs(a-b))/2;
s2=(b+c+abs(b-c))/2;
if(s1>s2)
{
printf("%d eh o maior\n",s1);
}
else
{
printf("%d eh o maior\n",s2);
}
}
return 0;
}

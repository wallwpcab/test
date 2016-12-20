#include<stdio.h>
int main()
{
int a,b,i,sum=0;
while(scanf("%d %d",&a,&b)!=EOF)
{
for(i=0;i<b;i++)
{
sum+=a+i;
}
printf("%d",sum);
}
return 0;
}

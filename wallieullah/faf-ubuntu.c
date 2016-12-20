#include <stdio.h>
#include <math.h>
int main()
{
int A,N,i,count=0,sum=0;
scanf("%d %d",&A,&N);
for(i=A;i<=pow(10,7);++i)
{
sum+=i;
++count;
if(N>0)
{
if(count==N)
{
printf("%d\n",sum);
break;
}
}
else if(N<=0)
{
scanf("%d",&N);
}
}
return 0;
}

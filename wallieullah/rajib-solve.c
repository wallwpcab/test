#include<stdio.h>
int main()
{
int count=0,i;
float n,sum,average=0.0;
for(i=1;i<=6;i++)
{
scanf("%f",&n);
if(n>0)
{
sum+=n;
count++;
}
}
average=sum/(float)count;
printf("%d valores positivos\n",count);
printf("%f\n",average);
return 0;
}

#include<stdio.h>
int main()
{
int i,count=0;
float a[6];
for(i=0;i<6;i++)
{
scanf("%f",&a[i]);
if(a[i]>0)
{
count++;
}
}
printf("%d valores positivos\n",count);
return 0;
}

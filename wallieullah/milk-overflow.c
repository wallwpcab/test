#include<stdio.h>
int main()
{
int a[10],i,s=0,j;
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
s=a[i];
for(j=0;j<=10;j++)
{
s=a[j]%10;
printf("%d",s);
}
}
return 0;
}


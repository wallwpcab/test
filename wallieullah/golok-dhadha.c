#include<stdio.h>
#include<string.h>
int main()
{
int a[100],i,j,s=0;
while(scanf("%s",a)!=EOF)
{
for(i=0;i<136;i++)
{
if(a[i]<10)
{
for(j=1;j<10;j++)
{
s=a[i];
}
printf("%c",s);
}
}
}
return 0;
}

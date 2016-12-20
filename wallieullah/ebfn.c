#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main()
{
int a[100],count=0,i,flag=0,c=0,csharp=0,chash=0;
while(flag!=EOF)
{
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
chash++;
}
if(a[i]%2!=0)
{
csharp++;
}
if(a[i]>0)
{
c++;
}
if(a[i]<0)
{
count++;
}
}
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negetivo(s)\n",chash,csharp,c,count);
break;
}
return 0;
}


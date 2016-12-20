/*#include<stdio.h>
int main()
{
int T,a,i;
scanf("%d",&T);
while(T--)
{
scanf("%d",&a);
if(a>0)
{
for(i=0;i<=a;i++)
{
a--;
}
printf("%d",a);
}
}
return 0;
}*/
#include<stdio.h>
int main()
{
int T,a,i,s=0,n;
scanf("%d",&T);
while(T--)
{
scanf("%d",&a);
for(i=1;i<a;i++)
{
a--;
n=i*a;
s+=n;
printf("%d",s);
}
}
return 0;
}

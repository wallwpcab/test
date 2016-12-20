/*#include<stdio.h>
#include<math.h>
#include<time.h>
//#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int a,count=0,s,i,b;
while(scanf("%d",&a)!=EOF)
{
if(a>10)
{
if((a/10)!=3)
{
for(i=0;i<=a;i++)
{
s=0;
a--;
s+=a;
s++;
}
printf("%d",s);
}
}
else
{
if(a%3==0)
{
b=a-1;
printf("%d\n",b);
}
else
{
printf("%d\n",a);
}
}
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main ()
{
int n;
while(scanf("%d",&n)!=EOF)
{
if(n==0)
return 0;
int s=n;
int c=0;
if(floor(sqrt(n))==sqrt(n))
c--;
int i;
for(i=2;i<=sqrt(n)+1;i++)
{
int flag=0;
while(n%i==0)
{
n/=i;
flag=1;
}
if(flag==1)
c++;
}
printf("%d : %d\n",s,c+1);
}
return 0;
}

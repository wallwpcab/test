/*#include <stdio.h>
#include <math.h>
int main()
{
int i1=0,i2=0,h1,h2,m1,m2,i;
for(i=1;i<=pow(10,7);++i)
{
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
i2=h2*60 + m2;
i1= h1*60 + m1;
if(h1==0 && m1==0 && h2==0 && m2==0)
{
break;
}
else
{
if(m2>=m1)
{
printf("%d\n",i2-i1);
}
else if(m1>m2)
{
printf("%d\n",i2-i1+1440);
}
}
}
return 0;
}
*/
#include<stdio.h>
int main()
{
int a,b,p=0,m=0;
while(scanf("%d",&a)!=EOF)
{
if(a>0)
p++;
else
m++;
}
printf("positive:%d\n\n",p);
printf("negative:%d",m);
return 0;
}
/*#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<0)
{
printf("\n%d negative\n",a[i]);
}
else if(a[i]>0)
printf("\n%d positive\n",a[i]);
}
return 0;
}
*/
/*#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<0)
{
printf("\n%d negative\n",a[i]);
}
else if(a[i]>0)
printf("\n%d positive\n",a[i]);
}
return 0;
}
/*#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i,c=0,c1=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<0)
c++;
else if(a[i]>0)
c1++;
}
printf("Positive %d\nNegative %d\n",c1,c);
return 0;
}
*/



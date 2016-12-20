#include<stdio.h>
int main()
{
int t;
int n,i,j,k;
int m;
int temp;
long long int a[200],b[200];
long long int l,p;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
m=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%lld",&a[j]);
}
for(j=0;j<=n;j++)
{
b[j]=987987;
}
for(k=0;k<n;k++)
{
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
p=a[n-1];
for(j=0;j<n;j++)
{
l=1;
for(k=j+1;k<n;k++)
{
if(a[j]==a[k])
{
l=l+1;
}
}
if(l>1)
{
if(b[l]<987987)
{
if(b[l]<a[j])
{
b[l]=a[j];
}
else if(b[l]>a[j])
b[l]=b[l];
}
}
else
{
b[l]=a[j];
}
}
}
for(j=n;j>=1;j--)
{
if(b[j]<987987)
{
printf("Case %d: %lld %d\n",i,b[j],j);
m=m+1;
break;
}
}
if(m==0)
{
printf("Case %d: %lld 1\n",i,p);
}
}
return 0;
}

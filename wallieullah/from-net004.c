/*#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<dos.h>
#include<stdlib.h>
#include<malloc.h>
#include<stack>
using namespace std;
int main()
{
long long fact[100];
stack<long long>q;
fact[0]=1;
long long i,j,k,l,m,n,t,p;
for(i=1;i<=20;i++)
{
fact[i]=fact[i-1]*i;
}
scanf("%lld",&t);
for(i=1; i<=t; i++)
{
scanf("%lld",&n);
for(j=20;j>=1;j--)
{
if(fact[j]==n)
{
q.push(j);
break;
}
else if(fact[j]<n)
{
q.push(j);
n=n-fact[j];
}
}
p=0;
printf("Case %lld: ",i);
if(j==0)
{
printf("impossible");
while(!q.empty())
{
q.pop();
}
}
else
{
while(!q.empty())
{
k=q.top();
q.pop();
if(p!=0)
printf("+");
printf("%lld!",k);
p=1;
}
}
printf("\n");
}
return 0;
}*/
#include<stdio.h>
int main()
{
int n,i,max,j,k,min,m,o;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
j=i;
}
}
min=a[n-1];
for(o=0;o<n;o++)
{
if(a[o]<=min)
{
min=a[o];
k=o;
}
}
m=n-1-k;
if(j==0&&k==n-1)
{
printf("0");
}
else if(k>j)
{
printf("%d",j+m);
}
else
{
printf("%d",j+m-1);
}
return 0;
}


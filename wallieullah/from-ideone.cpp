#include<stdio.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int t,a,e,s1=0,i,s2,j;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%d",&e);
if(e<0)
e=0;
s1+=e;
}
printf("Case %d: %d\n",j,s1);
s1=0;
}
return 0;
}









































/*#include<bits/stdc++.h>
typedef long long LL;
typedef unsigned long long ULL;
using namespace std;
int main()
{
LL T,N,arr[30001],arr2[30001];
while(cin>>T)
{
for(LL i=0;i<T;i++)
{
cin>>arr[i];
}
if(T==1)
{
if(arr[0]<0)
{
cout<<"Not jolly"<<line;
}
else
{
cout<<"Jolly"<<line;
}
}
else if(T==2)
{
if(abs(arr[1]-arr[0])==1)
{
cout<<"Jolly"<<line;
}else
{
cout<<"Not jolly"<<line;
}
}
else
{
LL p=1 ;
for(LL i=1;i<T;i++)
{
if(arr[i]<0)
{
p=0;
break;
}
else
{
arr2[i-1]=abs(arr[i]-arr[i-1]);
}
}
if(p==1)
{
sort(arr2,arr2+(T-1));
for(LL i=0;i<T-2;i++)
{
if(arr2[0]>1)
{
p=0;
break;
}
N=arr2[i+1]-arr2[i];
if(N>1 || N==0)
{
p=0;
break;
}
}
if(p==1)
{
cout<<"Jolly"<<line;
}
else
{
cout<<"Not jolly"<<line;
}
}
else
{
cout<<"Not jolly"<<line;
}
}
}
return 0;
}*/
#include<stdio.h>
int main()
{
int t,a,e,s1=0,i,s2,j;
scanf("%d",&t);

for(j=1;j<=t;j++)
{

if(j <= (t - 1)){
    printf("\n");
}
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%d",&e);
s1 += e;
}
printf("Case %d: %d\n",j,s1);
}
return 0;
}

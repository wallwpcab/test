#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long LL;
const int N = 10010;
int ep[N], p[N];
bool isPrime(int x)
{
if(x<2)
return false;
if(x==2 or x==3)
return true;
if(x%2==0)
return false;
int i,root=sqrt(x)+1;
for(i=3;i<=root;i+=2)
if(x%i==0)
return false;
return true;
}
void elure()
{
int i;
for(i=0;i<N;i++)
ep[i]=(i*i)+i+41;
}
void preCalc()
{
for(int i=0;i<N;i++)
{
if(isPrime(ep[i]))
p[i]++;
if(i>0)
p[i]+=p[i-1];
}
}
int main()
{
elure();
preCalc();
int i,a,b;
while(scanf("%d%d",&a,&b)!=EOF)
{
int p1,p2;
p1=b-a+1;
if(a==0)
p2=p[b];
else
p2=p[b]-p[a-1];
printf("%.2lf\n",((double)p2*100.00)/double(p1));
}
return 0;
}

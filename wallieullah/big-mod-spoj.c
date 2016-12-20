#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
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
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",chash,csharp,c,count);
break;
}
return 0;
}
/*#include <iostream>
using namespace std;
string s[1001];
void c()
{
s[0].push_back(1);
for(int i = 1;i<=1000;++i)
{
int l,c1,r;
len=s[i-1].length();
c1=r=0;
for(int j=0;j<len;++j)
{
r=i*s[i-1].at(j);
r+=c1;
s[i].push_back(r%10);
c1=r/10;
}
while(c1)
{
s[i].push_back(c1%10);
c1/=10;
}
}
}
int main()
{
int n;
calculate_factorials();
while(cin>>n)
{
cout<<n<< "!\n";
for(int i=s[n].length()-1;i>=0;--i)
cout<<int(s[n].at(i));
cout << '\n';
}
return 0;
}
*/































































#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int big_mod(int b,int p,int m)
{
if(p==0)
return 1;
else if(p%2==1)
{
int p1=b%m;
int p2=(big_mod(b,p-1,m))%m;
return (p1*p2)%m;
}
else if(p%2==0)
{
int p1=(big_mod(b,p/2,m))%m;
return(p1*p1)%m;
}
}
int main()
{
long long int b,p,m;
scanf("%ld%ld%lld",&b,&p,&m);
//big_mod(base,power,mod);
printf("%d",big_mod(b,p,m));
}

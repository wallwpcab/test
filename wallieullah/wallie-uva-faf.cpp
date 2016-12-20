#include<bits\c++.h>
#include<iostream>
int main()
{
int T,N,i,b,w,j;
cin>>T;
for(i=1;i<=T;++i)
{
b=0,w=0;
cin>>N;
char a[N];
cin>>a;
for(j=0;j<N;++j)
{
if(a[j]=='B')
{
++b;
}
else if(a[j]=='W')
{
++w;
}
}
if(b>w)
{
if(w==0)
{
cout<<"Case  :"<<i<<"BANGLADESH\n";
}
else
{
cout<<"Case  :"<<i<<"BANGLAWASH  "<<b-w<<"WWW\n";
}
}
else if(w>b)
{
if(b==0)
{
cout<<"Case  :"<<i<<"WWW "<<w-b<<"BANGLAWASH\n";
}
}
else if(w==b)
{
if(w==0)
{
cout<<"Case  :"<<i<<"ABANDENED\n";
}
else
{
cout<<"Case  :"<<i<<"DRAW\n";
}
}
}
return 0;
}


#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long LONG_LONG_MAX
#define ld long double
#define pi pair<int,int>
#define srt(vec) sort(vec>begin(),vec.end())
using namespace std;
int main()
{
int t;
cin>>t;
rep(i,t)
{
int n;
cin>>n;
int a=0,b=0;
if(n>10)
{
a=n-10;
b=n-a;
}
else
a=n;
cout<<a<<" "<<b<<endl;
}
return 0;
}

/*#include<stdio.h>
int main()
{
int t,x1,x2,y1,y2,k=0,c,x,y,i=0;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d%d%d\n",&x1,&y1,&x2,&y2,&c);
printf("Case %d:\n",++k);
while(c--)
{
scanf("%d%d",&x,&y);
if(x>x1&&x<x2&&y>y1&&y<y2)
printf("Yes\n");
else
printf("No\n");
}
}
return 0;
}*/


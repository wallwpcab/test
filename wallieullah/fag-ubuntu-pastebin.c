#include <stdio.h>
int main()
{
int T,N,i,b,w,j;
scanf("%d",&T);
for(i=1;i<=T;++i)
{
b=0;
w=0;
scanf("%d",&N);
char a[N];
scanf("%s",&a);
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
printf("Case %d: BANGLAWASH\n",i);
}
else
{
printf("Case %d: BANGLAWASH %d - %d WWW\n",i,b,w);
}
}
else if(w>b)
{
if(b==0)
{
printf("Case %d: WHITEWASH\n",i);
}
else
{
printf("Case %d: WWW %d - %d BANGLAWASH\n",i,w,b);
}
}
else if(w==b)
{
if(w==0)
{
printf("Case %d: ABANDONED\n",i);
}
else
{
printf("Case %d: DRAW\n",i);
}
}
}
return 0;
}

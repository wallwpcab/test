#include<stdio.h>
int main()
{
int n,i,t1,t2,fi,at,ct1,ct2,ct3;
float sum=0,ct;
scanf("%d",&n);
if(n>0&&n<100)
{
for(i=1;i<=n;i++)
{
scanf("%d%d%d%d%d%d%d",&t1,&t2,&fi,&at,&ct1,&ct2,&ct3);
if(t1<=20 && t2<=20 && fi<=30 && at<=10 && ct1<=20 && ct2<=20 && ct3<=20)
{
if(ct1>ct2&&ct3>ct2)
{
ct=(ct1+ct3)/2;
}
else if(ct2>ct1&&ct3>ct1)
{
ct=(ct2+ct3)/2;
}
else
{
ct=(ct1+ct2)/2;
}
sum=t1+t2+fi+at+ct;
if(sum>=90)
{
printf("Case %d: A\n",i);
}
else if(sum<90&&sum>=80)
{
printf("Case %d: B\n",i);
}
else if(sum<80&&sum>=70)
{
printf("Case %d: C\n",i);
}
else if(sum<70&&sum>=60)
{
printf("Case %d: D\n",i);
}
else if(sum<60)
{
printf("Case %d: F\n",i);
}
}
}
}
return 0;
}

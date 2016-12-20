#include<stdio.h>
int main()
{
int t,s,s1;
float s2;
while(scanf("%d %d",&t,&s)!=EOF)
{
s1=t*s;
s2=s1/(float)12.0;
printf("%.3f\n",s2);
}
return 0;
}

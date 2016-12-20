#include<stdio.h>
int main()
{
int r,pi=3.1416,S,R,T,n;
scanf("%d",T);
while(scanf("%d",r)!=EOF)
{
R=(2*r)*(2*r);
S=3.1416*r*r;
n=R-S;
printf("%d",n);
}
return 0;
}

#include<stdio.h>
int main()
{
double pi=3.14159,t,r,f;
while(scanf("%lf",&r)!=EOF)
{
t=(4*pi*r*r*r)/3;
printf("VOLUME = %.3lf\n",t);
}
return 0;
}

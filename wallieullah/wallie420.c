#include<stdio.h>
main()
{
int T,i;
double D,m,x=0.621371;
scanf("%d",&T);
if(T<=50)
{
for(i=0;i<T;++i)
{
scanf("%lf",&D);
if(D<=100000)
{
printf("%.10lf\n",D*x);
}
}
}
}

#include<stdio.h>
int main()
{
double A,B,C,T,tr,s,rec,pi=3.14159,t,ci,r;
while(scanf("%lf%lf%lf",&A,&B,&C)!=EOF)
{
t=(A*C)/2;
ci=pi*C*C;
tr=((A+B)*C)/2;
s=B*B;
rec=A*B;
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf",t,ci,tr,s,rec);
}
return 0;
}

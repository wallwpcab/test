#include<stdio.h>
int main()
{
double A,B,C;
while(scanf("%lf%lf%lf",&A,&B,&C)!=EOF)
{
if(A>=(B*B+C*C))
{
printf("FORMA TRIANGULO\n");
}
else if((A*A)==(B*B+C*C))
{
printf("TRIANGULO RECTANGULO\n");
}
else if((A*A)>(B*B+C*C))
{
printf("TRIANGULO ACUTANGULO\n");
}
else if((A==B || A==C || B==C) && (A!=B && A!=C && B!=C))
{
printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCLAES\n");
}
else
{
printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCALES\n");
}
}
return 0;
}

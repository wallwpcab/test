#include<stdio.h>
int main()
{
float S,A,B,C,At,Ac,Atr,Asq,Ar;
while(scanf("%f%f%f",&A,&B,&C)!=EOF)
{
S=A+B;
At=(A*C)/2;
Ac=(3.14159)*C*C;
Atr=(S*C)/2;
Asq=(B*B);
Ar=A*B;
printf("TRIANGULO %f\nCIRCULO: %f\nTRAPEZIO: %f\nQUADRADO: %f\n RETANGULO: %f\n",&At,&Ac,&Atr,&Asq,&Ar);
}
return 0;
}


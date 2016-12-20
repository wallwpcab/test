#include <cstdio>
#include <cinttypes>
int main()
{
    std::printf("%zu\n", sizeof(std::int64_t));
    std::printf("%s\n", PRId64);
    std::printf("%+" PRId64 "\n", INT64_MIN);
    std::printf("%+" PRId64 "\n", INT64_MAX);

    std::int64_t n=7;
    std::printf("%+"PRId64"\n",n);
    return 0;
}















/*#include<stdio.h>
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
*/

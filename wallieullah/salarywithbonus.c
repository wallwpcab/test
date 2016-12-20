#include<stdio.h>
int main()
{
    double a,b,T;
    while(scanf("%lf %lf",a,b)!=EOF)
    {
        T=a+(b*(double).15);
        printf("TOTAL = R$%lf",T);
    }
    return 0;
}

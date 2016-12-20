#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,g,h;
    while(scanf("%d%d%f%d%d%f",&a,&b,&e,&c,&d,&f)!=EOF)
    {
        g=(b*e)+(d*f);
        printf("VALOR A PAGAR: R$ %.2f\n",g);
    }
    return 0;
}

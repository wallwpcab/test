#include<stdio.h>

int main()
{
    float r,t;
    float pi=3.14159;
    while(scanf("%f",&r)!=EOF)
    {
        t=((4*pi*pow(r,3)/3));
        printf("VOLUME %.3f",t);
    }
    return 0;
}

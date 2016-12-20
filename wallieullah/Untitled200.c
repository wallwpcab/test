#include<stdio.h>
int main()
{
    float A,R;
    while(scanf("%f",&R)!=EOF)
    {
        A=3.14159*R*R;
        printf("A=%.4f",A);
    }
    return 0;
}

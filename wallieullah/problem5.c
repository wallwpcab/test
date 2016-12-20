#include<stdio.h>
int main()
{
    float c,f,C,F;
    printf("Conversion of Temperature:\n\n");
    printf("Celsius to Farenheit:\n");
    printf("Input the celsius:");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("Farenheit Temparature:%.2f",F);
    printf("\n\n Farenheit to Celsius:");
    printf("\nInput the Farenheit:");
    scanf("%f",&f);
    C=(f-32)/1.8;
    printf("Celsius Temparature: %.2f\n\n");
    return 0;
}

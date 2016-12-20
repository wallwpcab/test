#include<stdio.h>
#define PI 3.1416
int main()
{
    float r,Area,circumference;
    printf("Enter the radius:");
    scanf("%f",&r);
    Area=PI*r*r;
    printf("Area of the circle :%.4f",Area);
    circumference=2*PI*r;
    printf("\n circumference of the circle:%4f",circumference);

}


#include<stdio.h>
int main()
{
float A,B,C,Perimetro,Area;
while(scanf("%f %f %f",&A,&B,&C)!=EOF)
{
if(C+B>A)
{
if(B+A>C)
{
if(A+B>C)
{
Perimetro=A+B+C;
printf("Perimetro = %.1f\n",Perimetro);
}
}
}
else
{
Area=((A+B)*C)/2;
printf("Area = %.1f\n",Area);
}
}
return 0;
}

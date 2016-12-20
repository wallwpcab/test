#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
float a,b,c;
float x,y,z;
float A,B,C;
while(n--)
{
scanf("%f%f%f",&a,&b,&c);
x=(a*a)+(b*b)-(c*c)/(2*a*b);
y=(b*b)+(a*a)-(c*c)/(2*b*a);
z=(c*c)+(a*a)-(b*b)/(2*c*a);
A=acos(x);
B=acos(y);
C=acos(z);
if(A==90.00 || B==90.00 || C==90.00)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}


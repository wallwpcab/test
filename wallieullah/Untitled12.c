#include<stdio.h>
int main()
{
float a,b,c,s;
scanf("%f%f%f",&a,&b,&c);
s=((a*a)-(b*b)-(c*c))/(2*b*c);
printf("%f",s);
return 0;
}
/*#include<stdio.h>
int main()
{
int n,a,b,c;
float x,y,z;
scanf("%f%f%f",&a,&b,&c);
x=((a*a)-(b*b)-(c*c))/(2*b*c);
printf("%f",x);
return 0;
}*/

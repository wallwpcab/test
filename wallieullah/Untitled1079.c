#include<stdio.h>
#include<math.h>
int main()
{
int T;
float a,b,c,w;
scanf("%d",&T);
while(T--)
{
scanf("%f%f%f",&a,&b,&c);
w=((a*2)+(b*3)+(c*5))/10;
printf("%.1f\n",w);
}
return 0;
}

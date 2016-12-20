#include<stdio.h>
int main()
{
int X;
float Y,c;
while(scanf("%d %f",&X,&Y)!=EOF)
{
c=X/(float)(Y);
printf("%.17121212f km/l\n",c);
}
return 0;
}

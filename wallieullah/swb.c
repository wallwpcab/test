#include<stdio.h>
int main()
{
char string[10];
double i,j,TOTAL;
while(scanf("%s%lf%lf",string,&i,&j)!=EOF)
{
TOTAL=i+(j*.15);
printf("TOTAL = R$ %.2lf\n",TOTAL);
}
return 0;
}

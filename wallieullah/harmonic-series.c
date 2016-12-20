#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float i, sum, t;
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
t=1/(float)i;
sum=sum+t;
}
printf("%.2f\n",sum);
getch();
}

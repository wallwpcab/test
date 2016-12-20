/*#include<stdio.h>
#include<math.h>
int main()
{
    int b,p,m,r;
    while(scanf("%d%d%d",&b,&p,&m)!=EOF)
    {
        r=(pow(b,p))%m;
    }
    printf("%d",r);
    return 0;
}*/
#include<stdio.h>
int main()
{
int fact=1,i;
for(i=1;i<=100;i++)
{
fact=((fact%97)*(i%97))%97;
}
printf("%d\n",fact);
}

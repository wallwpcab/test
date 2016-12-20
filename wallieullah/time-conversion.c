#include<stdio.h>
int main()
{
int N,b,c,d,e,e1,a;
while(scanf("%d",&a)!=EOF)
{
if(N<3600)
{
b=a/3600;
c=a/60;
d=a-c*60;
printf("%d : %d : %d\n",b,c,d);
}
else
{
b=a/3600;
e=a-(b*3600);
e1=e/60;
c=a/60;
d=a-c*60;
printf("%d : %d : %d\n",b,e1,d);
}
}
return 0;
}

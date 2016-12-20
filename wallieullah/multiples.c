#include<stdio.h>
int main()
{
int x,y;
while(scanf("%d %d",&x,&y)!=EOF)
{
if(x%y==0 || y%x==0)
{
printf("Sao Multiplos\n");
}
else
{
printf("Nao Sao Multiplos\n");
}
}
return 0 ;
}

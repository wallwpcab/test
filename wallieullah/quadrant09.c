#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a>0 && b>0)
{
printf("premeiro\n");
}
else if(a>0 && b<0)
{
printf("quarto\n");
}
else if(a<0 && b<0)
{
printf("terceiro\n");
}
else if(a<0 && b>0)
{
printf("segundo\n");
}
else
{
break;
}
return 0;
}

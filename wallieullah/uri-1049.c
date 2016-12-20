#include<stdio.h>
int main()
{
int array[10],i;
{
for(i=0;;i++)
{
scanf("%d",&array[i]);
if(array[i]==61)
{
printf("Brasilia\n");
}
else if(array[i]==71)
{
printf("Salvador\n");
}
else if(array[i]==11)
{
printf("Sao Paulo\n");
}
else if(array[i]==21)
{
printf("Rio de Janerio\n");
}
else if(array[i]==32)
{
printf("Juiz de Fora\n");
}
else if(array[i]==19)
{
printf("Campinos\n");
}
else if(array[i]==27)
{
printf("Vitoria\n");
}
else if(array[i]==31)
{
printf("Belo Horizonta\n");
}
else if(array[i]!= 31 || 27 || 19 || 32 || 21 || 71)
{
printf("DDD nao cadastrado\n");
}
else
break;
}
}
return 0;
}

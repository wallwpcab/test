#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter value A,B and C:");
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c)
{
printf("%d is the largest then %d and %d",a);
}
else if(b>=a && b>=c)
{
printf("\n %d is the largest than %d and %d",b);
}
else
{
printf("\n%d is the largest than %d and %d",c);
}
return 0;
}

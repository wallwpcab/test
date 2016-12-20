#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x;
    printf("Enter the value of A,B and C:");
    scanf("%d %d %d",&a,&b,&c);
    x=pow(a+b,3);
    printf("First equation:%d\n",a+b);
    printf("Third equation:%d\n",a+b/2);
    printf("Third equation:%d\n",x);
    printf("Fourth equation:%d\n",a/b);
    printf("Fifth equation:%d\n",a%b);
    printf("Sixth equation:%d\n",(a+b+c)/3);
    x=sqrt(a);
    printf("Seventh equation:%d\n",x);
    return 0;

}

#include<stdio.h>
int main()
{
    int a,a1,a2,t1,sum,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        a1=a%10;
        a2=a/10;
        t1=9-a1;
        sum=(a2*10)+t1;
        printf("%d\n",sum);
    }
    return 0;
}

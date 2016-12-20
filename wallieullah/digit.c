#include<stdio.h>
int main()
{
    int a,a1,t1,a2,sum;
    while(scanf("%d",&a)!=EOF)
    {
        a1=a%10;
        a2=a/10;
        t1=9-a1;
        sum=(a2*10)+t1;
        printf("%d\n",sum);

    }
    return 0;

}

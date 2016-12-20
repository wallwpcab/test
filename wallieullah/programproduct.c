#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        sum=c+f;
        printf("%d",sum);
    }
    return 0;
}

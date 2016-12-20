#include<stdio.h>
int main()
{
    int a,b,sum;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        sum=((a*(a+1))/2)+1;
        printf("%d",sum);
    }
    return 0;
}

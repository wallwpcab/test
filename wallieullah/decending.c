#include<stdio.h>
int main()
{
    int a,b,flag;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>b)
        {
            printf("Descrecente");
        }
        else if(a<b)
        {
            printf("Crescente");
        }
        else
        {
            flag=-1;
        }

    }
    return 0;
}

#include<stdio.h>
int main()
    {
    int i,n,fact=1,j,fac=1,sum,m;
    while(scanf("%d%d",&n,&m)!=EOF)
        {
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=m;j++)
    {
    fact=fact*i;
    fac=fac*j;
    }

    }
    sum=fact+fac;
    printf("%d\n",sum);
    }
    return 0;
    }



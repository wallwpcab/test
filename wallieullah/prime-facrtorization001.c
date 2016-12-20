#include<stdio.h>
int List[100];
int listSize;
void primeFactorize(int n)
{
    int i,listSize=0,prime[100];
    for(i=0;prime[i]<=n;i++)
{
    if(n%prime[i]==0)
{
    while(n%prime[i]==0)
{
    n/=prime[i];
    List[listSize]=prime[i];
    listSize++;
}
}
}
}
int main()
{
    primeFactorize(40);
    int listSize,i,List[100],prime[100];
    for(i=0;i<listSize;i++)
    printf("%d\n",List[i]);
    return 0;
}


/*#include<stdio.h>
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
    primeFactorize(10);
    int listSize,i,list[10],prime[10];
    for(i=0;i<listSize;i++)
    printf("%d\n",list[i]);
    return 0;
}*/
/*#include<stdio.h>
int List[100];
int listSize;
void primeFactorize(int n)
{
    int i,prime[100];
    int listSize=0;
    int sqrtN=(sqrt(n));
    for(i=0;prime[i]<=sqrtN;i++)
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
    if(n>1)
    {
        List[listSize]=n;
        listSize++;
    }
}
    int main()
    {
        int i,listSize;
        primeFactorize(29);
        for(i=0;i<listSize;i++)
        {
            printf("%d\n",List[i]);
        }
        return 0;
    }*/
/*#include<stdio.h>
#include<math.h>
int primefactor(int number)
{
    int i;
    for(i=2;i<=sqrt(number);i++)
    {
    printf("%d\n%d\n",i,number);
    while(number%i==0)
    {
        number=number/i;
        printf("factor=%d",i);
    }
    }
    if(number>1)
    {
    printf("last factor=%d\n",number);
    }

}
int main()
{
    int number=40;
    primefactor(number);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,c[1000],i=0,j;
    printf("Enter Decimal number:\n");
    scanf("%d",&a);
    while(a>0)
    {
        c[i]=a%2;
        i++;
        a=a/2;
    }
    printf("\nBinary number= ");
    for(j=i-1;j>=a/2;j--)
    {
        printf("%d",c[j]);
    }
    system("pause\n");
    return 0;
}





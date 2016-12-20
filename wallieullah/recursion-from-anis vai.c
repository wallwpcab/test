/*#include<stdio.h>
long long int count_down(long long int n)
{
if(n==0)
return 100;
// printf("%d\n",n);
return count_down(n-1);
}
int main()
{
printf("%lld\n",count_down(10));
return 0;
}*/
/*#include<stdio.h>
int fib(int n)
{
    int fibonacci[2300];
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    return (fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",(fib(n-1)+fib(n-2)));
    return 0;
}*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
long long  f[5001];
long long fib(long long n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    if(n==2)
    return 1;
    if(f[n]!=-1)
    return f[n];
    return f[n]=fib(n-1)+fib(n-2);

}
int main()
{
    long long n;
    scanf("%lld",&n);
    memset(f,-1,sizeof(f));
    printf("The Fibonacci number for %lld is %lld\n",n,fib(n));
    return 0;
}
#include<stdio.h>
int main()
{
double A;
while(scanf("%lf",&A)!=EOF)
{
if(A>25.00 && A<=50.00)
 printf("Intervalo (25,50]\n");
else if(A>=0.00 && A<=25.00)
 printf("Intervalo [0,25]\n");
else if(A>75.00 && A<=100.00)
 printf("Intervalo (75,100]\n");
else if(A>50.00 && A<=75.00)
 printf("Intervalo (50,75]\n");
else
 printf("Fora de intervalo\n");
}
return 0;
}


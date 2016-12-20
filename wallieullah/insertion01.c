/*#include <stdio.h>
#include <stdlib.h>
int main()
{
int data[100], i, n, item, loc;
printf("Enter size of elements in array: ");
scanf("%d",&n);
printf("Enter %d sorted elements: ", n);
for(i=0; i<n; i++)
{
scanf("%d", &data[i]);
}
printf("Enter insert item: ");
scanf("%d",&item);
printf("Enter location to insert item: ");
scanf("%d",&loc);
for(i=n-1; i>=loc-1; i--)
{
data[i+1]=data[i];
}
data[loc-1]=item;
printf("New array: ");
for(i=0; i<n+1; i++)
{
printf("%4d", data[i]);
}
return 0;
}
*/
/*#include<stdio.h>
int factorial(long long n)
{
    if(n!=1)
    {
        return n*factorial(n-1);
    }
}
int main()
{

    int n,s;
    while(scanf("%lld",&n)!=EOF)
    {
        s=factorial(n);
    if(s>6227020800)
    {
        printf("Overflow!\n");
    }
    else if(s<10000)
    {
        printf("Underflow!\n");
    }
    else if(s<6227020800&&s>10000)
    {
        printf("%lld",factorial(n));
    }
    }
    return 0;

}
//int string[100],string1[10000];
    //scanf("%d",&string[1000])
   /* int a,b,carry,temp1,temp2;
    a=b=1;
    int iscarry=0;
    int maxsize,currentsize;
    currents)
    */
#include<stdio.h>
long long f[10000];
long long fib(long long n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(f[n]!=-1)
        return f[n];
    return f[n]=fib(n-1)+fib(n-2);

}
int main()
{
    long long n;
    memset(f,-1,sizeof(f));
    printf("%lld",fib(100));
    return 0;
}

#include<iostream>
using namespace std;
bool isPrime(int n)
{
  if (n < 2)
  return false;
  for(long long i=2;i*i<=n;i++)
    {
    if(n%i==0)
    {
    return false;
    }
  }
  return true;
}
int main()
{
    int n,i;
    cin>>n;
    cout<<isPrime(n);
    return 0;
}







































/*#include<stdio.h>
int main()
{
    int t,a,b,c=0,i;
    scanf("%d",&t);
    while(t--)
    {
scanf("%d%d",&a,&b);
c=c+(a*b);
    }
    printf("%d\n",c);
    return 0;
}*/

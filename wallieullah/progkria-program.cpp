/*#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n)+1;i++)
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
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}*/

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#define M 1000000000
using namespace std;
bool marked[M];
void sieve(int n)
{
    for(int i=2;i<n;i++)
    {
        if(marked[i]==false) // i is a prime//
        {
            for(int j=i+i;j<=n;j+=i)
            {
                marked[j]=true;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sieve()<<endl;
    return 0;
}
/*#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float sum,s;
    int n,m;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>m;
        sum=0;
        int c=0;
        int num[m];

        for(int j=0;j<m;j++)
        {
            cin>>num[j];
            sum+=num[j];
        }
        sum /=(float)m;

        for(int k=0;k<m;k++)
        {
            if(num[k]>sum)
            {
                c++;
            }
        }
        printf("%.3f\n",(float)c/m*100);
    }
    return 0;
}

*/

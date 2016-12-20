/*#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int data[100],i,n,item,loc;
cout<<"Enter size of elements in array:";
cin>>n;
cout<<"Enter  sorted elements:"<<n;
for(i=0;i<n;i++)
{
cin>>data[i];
}
cout<<"enter insert item:"<<endl;
cin>>item;
cout<<"Enter location to insert item:"<<endl;
cin>>loc;
for(i=n-1;i>=loc-1;i--)
{
data[i+1]=data[i];
}
data[loc-1]=item;
cout<<"New array";
for(i=0;i<n+1;i++)
{
cout<<data[i]<<endl;
}
return 0;
}*/
#include <iostream>

using namespace std;

int mod(int a, int b, int c)
{
    if(b==0) return 1;

    if(b%2==0)
    {
        int x=mod(a,b/2,c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}

int main(){

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int B,P,M;

    while(cin>>B>>P>>M)
        cout<<mod(B,P,M)<<endl;

	return 0;
}



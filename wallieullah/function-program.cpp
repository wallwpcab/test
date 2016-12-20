#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int T;
float a,b,c,w;
cin>>T;
while(T--)
{
cin>>a>>b>>c;
w=((a*2)+(b*3)+(c*5))/(float)10;
cout<<setprecision(2)<<w<<"\n";
}
return 0;
}

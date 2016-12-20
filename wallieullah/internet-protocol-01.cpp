#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int test,cases=0;
cin>>cases;
char dot;
int a,b,c,d;
bitset<8> A,B,C,D;
while(test--)
{
cin>>a>>dot>>b>>dot>>c>>dot>>d;
cin>>A>>dot>>B>>dot>>C>>dot>>D;
if(A==a && B==b && C==c && D==d)
{
cases++;
cout<<cases;
}
else
{
cases++;
cout<<cases;
}

}
return 0;
}

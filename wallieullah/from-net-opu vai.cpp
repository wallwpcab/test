#include <bits/stdc++.h>
using namespace std;
int main()
{
string prth;
int cas;
cin >> cas;
getchar();
while(cas--)
{
getline(cin,prth);
int len = prth.length();
stack<char> mystack;
for(int i=0; i<len; i++)
{
if(prth[i]==')'&&!mystack.empty())
{
if(mystack.top()=='(') mystack.pop();
}
else if(prth[i]==']'&&!mystack.empty())
{
if(mystack.top()=='[') mystack.pop();
}
else
{
mystack.push(prth[i]);
}
}
if(mystack.empty())
{
cout<< "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
return 0;
}

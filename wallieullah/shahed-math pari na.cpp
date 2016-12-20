/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
string str;
while(cin>>str)
{
string str2;
for(auto& ch:str)
if(ch !='+')str2.push_back(ch);
sort(str2.begin(),str2.end());
int len=str2.length();
cout<<str2[0];
for(int i=1;i<len;++i)
cout<<'+'<<str2[i];
cout<<'\n';
}
return 0;
}*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
string str;
vector<int>digit;
while(cin>>str)
{
digit.clear();
for(int i=0;i<str.size();++i)
{
if(str[i]!='+')
digit>push_back(str[i]-48);
}
sort(digit.begin(),digit.end());
for(int i=0;i<digit.size()-1;++i)
{
cout<<digit[i]<<'+';
}
cout<<digit[digit.size()-1]<<'\n';
}
return 0;
}

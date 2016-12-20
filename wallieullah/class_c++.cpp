/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
int height;
int width;
int area();
};
int rectangle::area()
{
return height*width;
}
int main()
{
rectangle obj;
obj.height=10;
obj.width=45;
cout<<"Area = "<<obj.area()<<endl;
return 0;
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,i,y=0;
cin >>n;
vector<int>v1,v2;
for (i=0;i<n;i++)
{
int x;
cin>>x;
v1.push_back(x);
}
if(n>1)
{
for(i=0;i<n-1;i++)
{
int x=v1[i]-v1[i+1];
if(x<0)x=x * -1;
v2.push_back(x);
}
sort(v2.begin(),v2.end());
if(v2[v2.size()-1]>=n)
{
cout<<"Not jolly" ;
y=2;
}
else
{
for(i=0;i<v2.size()-1;i++)
{
int x=v2[i+1]-v2[i];
if (x>1)
{
y=1;
break;
}
}
}
}
if(y==1)
cout<<"Not jolly";
else if(y==0)
cout<<"Jolly";
return 0;
}*/
/*#include<iostream>
#include<cctype>
using namespace std;
string Capitalize(string str)
{
string::iterator it(str.begin());

  if(it!=str.end())
  str[0]=toupper((unsigned char)str[0]);
  while(++it!=str.end())
  {
  *it=tolower((unsigned char)*it);
  }
  return str;
}
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    char s[100];
    vector<string>V;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        V.push_back(s);
    }
    sort(V.begin(),V.end());
    printf("%s",s);
    return 0;
}


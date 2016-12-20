#include<iostream.h>
#include<string.h>
#include<cstring.h>
#include<sstream.h>
#include<cctype.h>
#include<string.h>
#include<algorithm.h>
#include<cmath.h>
#include<stack.h>
#include<fstream.h>
#include<cstdlib.h>
#include<vector.h>
#include<map.h>
#include<utility.h>
#include<iomanip.h>

using namespace std;
int main()
{
int x,y,a,b,a1,b1,i;
string s;
char c;
bool d;
map<pair<int,int>,int>nt;
cin>>x>>y;
while(cin>>a>>b>>c>>s)
    {
    d=true;
    for(i=0;i<s.length();i++)
        {
        if(s[i]=='L'){
        if(c=='N')c='W';
        else if(c=='W')c='S';
        else if(c=='S')c='E';
        else if(c=='E')c='N';
        }else if(s[i]=='R'){
        if(c=='N')c='E';
        else if(c=='E')c='S';
        else if(c=='S')c='W';
        else if(c=='W')c='N';
        }
        else if(s[i]=='F'){
        if(c=='N'){
        b1=b+1;
        if(b1>y){
        if(nt[make_pair(a,b)]!=1){
        nt[make_pair(a,b)]=1;
        d=false;
        break;
        }
        }
        else b++;
        }
        else if(c=='E'){
        a1=a+1;
        if(a1>x){
        if(nt[make_pair(a,b)]!=1){
        nt[make_pair(a,b)]=1;
        d=false;
        break;
        }
        }
        else a++;
        }
        else if(c=='S'){
        b1=b-1;
        if(b1<0){
        if(nt[make_pair(a,b)]!=1){
        nt[make_pair(a,b)]=1;
        d=false;
        break;
        }
        }
        else b--;
        }
        else if(c=='W'){
        a1=a-1;
        if(a1<0){
        if(nt[make_pair(a,b)]!=1){
        nt[make_pair(a,b)]=1;
        d=false;
        break;
        }
        }
        else a--;
        }
        }
        if(d==false)break;
        }
        cout<<a<<" "<<b<<" "<<c;
        if(d==false) cout<<" LOST";
        cout<<endl;
        }
        return 0;
        }


/*#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
ios:sync_with_stdio(false);
string str;
while(cin>>str)
{
string str2;
for(auto& ch: str)
if(ch!='+')str2.push_back(ch);
sort(str2.begin(),str2.end());
int len=str2.length();
cout<<str2[0];
for(int i=1;i<len;++i)
cout<<'+'<<str2[i];
cout<<'\n';
}
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> mii;
map<int,char>m2;
vector<int> adj[200];
int N,cnt,src,visited[200],level[200],lev, Res;
int par[200];
int bfs(int src,int des)
{
memset(level,0,sizeof(level));
memset(visited,0,sizeof(visited));
queue<int> q;
q.push(src);
visited[src]=1;
level[src]=1;
while(!q.empty())
{
int u= q.front();
if(u==des)
return 0;
q.pop();
for(int i=0; i<adj[u].size(); i++)
{
int v=adj[u][i];
if(!visited[v])
{
visited[v]=1;
level[v]=level[u]+1;
par[v]=u;
q.push(v);
}
}
}
}
int pathprint(int e,int s)
{
if(e==s)
printf("%c",m2[s]);
else
{
pathprint(par[e],s);
printf("%c",m2[e]);
}
}
int main()
{
int test,q;
cin>>test;
int t;
while(test--)
{
scanf("%d %d",&N,&q);
cnt=1;
string u,v;
for(int i=0;i<N;i++)
{
cin>>u>>v;
if(mii.find(u)==mii.end())
{
mii[u]=cnt;
m2[cnt]=u[0];
cnt++;
//printf("%c\n",m2[cnt]);
}
if(mii.find(v)==mii.end())
{
mii[v]=cnt;
m2[cnt]=v[0];
cnt++;
// printf("%c\n",m2[cnt]);
}
adj[mii[u]].push_back(mii[v]);
adj[mii[v]].push_back(mii[u]);
}
for(int i=0; i<q; i++)
{
cin>>u>>v;
bfs(mii[u],mii[v]);
pathprint(mii[v],mii[u]);
if(i!=q-1)
printf("\n");
}
for(int i=0;i<=cnt;i++)adj[i].clear();
mii.clear();
m2.clear();
if(t!=0)
printf("\n");
}
return 0;
}


#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#define mxx 110
using namespace std;
int visited[mxx],level[mxx];
vector<int>vec[mxx];
int bfs(int src)
{
queue<int>q;
q.push(src);
memset(visited,0,sizeof(visited));
memset(level,0,sizeof(level));
visited[src]=1;
level[src]=0;
while(!q.empty())
{
int u=q.front();
for(int i=0; i<vec[u].size(); i++)
{
int v=vec[u][i];
if(!visited[v])
{
visited[v]=1;
level[v]=level[u]+1;
q.push(v);
}
}
q.pop();
}
}
int main()
{
int i,t,n,e;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
for(int m=0; m<mxx; m++)
{
vec[i].clear();
}
scanf("%d%d",&n,&e);
for(int j=0; j<e; j++)
{
int x,y;
scanf("%d%d",&x,&y);
vec[x].push_back(y);
vec[y].push_back(x);
}
int src,des,level1[mxx],level2[mxx];
scanf("%d%d",&src,&des);
bfs(src);
for(int k=0; k<n; k++)
{
level1[k]=level[k];
}
bfs(des);
for(int k=0; k<n; k++)
{
level2[k]=level[k]+level1[k];
}
sort(level2,level2+n);
printf("Case %d: %d\n",i,level2[n-1]);
}
}

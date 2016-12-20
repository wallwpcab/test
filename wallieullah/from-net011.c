#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>vec1;
vector<ll>vec2;
ll ara[20];
void setup(ll i, ll j, ll val, ll mark)
{
if(i==j)
{
if(mark==0)
{
vec1.push_back(val);
return;
}
else
{
vec2.push_back(val);
return;
}
}
setup(i+1,j,val,mark);
setup(i+1,j,val+ara[i],mark);
return;
}
int main()
{
ll t,k,i,j,p,q,n,m,w;
scanf("%lld",&t);
for(k=1;k<=t;k++)
{
scanf("%lld %lld", &n, &w);
for(i = 0; i < n; i++)
scanf("%lld", &ara[i]);
vec1.clear();
vec2.clear();
printf("Case %lld: ", k);
if(n == 1)
{
if(ara[0] <= w)
printf("2\n");
else
printf("1\n");
continue;
}
p = n/2;
setup(0, p, 0, 0);
setup(p, n, 0, 1);
sort(vec1.begin(), vec1.end());
m = vec2.size();
q = 1;
j = 0;
for(i=0;i<m;i++)
{
j += upper_bound(vec1.begin(), vec1.end(), w-vec2[i]) - vec1.begin();
}
printf("%lld\n", j);
}
return 0;
}

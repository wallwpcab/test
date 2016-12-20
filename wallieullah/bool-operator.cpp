#include <cstdio>
#include <cstring>
using namespace std;
typedef     long long       LL;
const int MAXL = 20;
LL fact[MAXL+1];
int main()
{
fact[0] = 1;
    for(int i = 1; i <= MAXL; ++i)
        fact[i] = fact[i-1] * i;
int t;
    scanf("%d", &t);
for(int tc = 1; tc <= t; ++tc) {
        char str[MAXL+5];
        int n;
        scanf("%s %d", str, &n);
printf("Case %d: ", tc);
int len = strlen(str);
        int cntLetters[26] = {0};
for(int i = 0; i < len; ++i)
            ++cntLetters[str[i] - 'a'];
LL permutation = fact[len];
        for(int i = 0; i < 26; ++i)
            if(cntLetters[i] > 1)
                permutation /= cntLetters[i];
                if(n > permutation) {
            puts("Impossible");
            continue;
        }
int nowLen = 0;
        int alreadyPassed = 0;
while(nowLen < len) {
            for(int i = 0; i < 26; ++i) {
                if(cntLetters[i]) {
                    --cntLetters[i];
                    permutation = fact[len - nowLen - 1];
for(int j = 0; j < 26; ++j)
                        if(cntLetters[j] > 1)
                            permutation /= fact[cntLetters[j]];
if(n <= alreadyPassed + permutation) {
                        ++nowLen;
                        putchar('a'+i);
                        break;
                    }
                    else {
                        ++cntLetters[i];
                        alreadyPassed += permutation;
                    }
                }
            }
}
putchar('\n');
    }
return 0;
}
#include <cstdio>
#include <algorithm>
#include <bitset>
#include <vector>
using namespace std;
const int MAXN = 20000+3;
vector<vector<int> > adjList;
bitset<MAXN> visited;
int cnt1, cnt2;
void dfs(int u, bool race)
{
    int sz = adjList[u].size();
    if(!sz) return;
visited[u] = true;
    (race)? ++cnt1 : ++cnt2;
for(int i = 0; i < sz; ++i) {
        int v = adjList[u][i];
        if(!visited[v]) dfs(v, !race);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
for(int tc = 1; tc <= t; ++tc) {
        adjList.clear();
        visited.reset();
adjList.resize(MAXN);
int n, u, v, N = 0;
    scanf("%d", &n);
while(n--) {
        scanf("%d %d", &u, &v);
adjList[u].push_back(v);
            adjList[v].push_back(u);
N = max(N, max(u, v));
        }
int maxCnt = 0;
for(int i = 1; i <= N; ++i) {
if(!visited[i]) {
                cnt1 = cnt2 = 0;
                dfs(i, true);
                maxCnt += max(cnt1, cnt2);
            }
        }
printf("Case %d: %d\n", tc, maxCnt);
    }
return 0;
}































































/*#include<iostream>
using namespace std;
int main()
{
bool john=true;
cout<<john<<endl;
bool jin=false;
cout<<jin<<endl;
bool hot;
char attractive;
cout<<"is megan fox hot(type y=yes,n=no.then press enter)";
cin>>attractive;
cout<<endl;
if(attractive=='y')
{
hot=true;
}
else
{
hot=false;
}
cout<<hot<<endl;
return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
bool status[1100002];
int siv()
{
    int N=100000;
    int sq=sqrt(N);
    for(int i=4;i<=N;i+=2)
    {
        status[i]=1;
    }
    for(int i=3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                status[j]=1;
            }
        }
    }
    status[1]=1;
}
int main()
{
   // int s=sqrt(N);
int N,sq;
scanf("%d",&N);
sq=sqrt(N);
printf("%d",siv());
}
#include<iostream>
using namespace std;
//bool isPrime(int);
bool  isPrime(int n)
{
if(n<2)
return false;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
return false;
}
}
return true;
}
int main()
{
int n,r=0;
cin>>n;
//r=isPrime(n);
cout<<isPrime(n);
}
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
if(n<2)
return false;
for(int i=2;i<=sqrt(n)+1;i++)
{
if(n%i==0)
{
return false;
}
}
return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n);
}
/*#include<conio.h>
#include<ctype.h>
#include<time.h>
int main()
{
int a,b,i,sum=0;
scanf("%d%d",&a,&b);
if(a<b)
{
for(i=a;i<b;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
}
printf("%d\n",sum);
}
else if(a>b)
{
for(i=a-1;i>b;i--)
{
if(i%2!=0)
{
sum=sum+i;
}
}
printf("%d\n",sum);
}
return 0;
}*/
#include<iostream>
using namespace std;
bool isPrime(int n)
{
if(n<2)
return false;
for(long long i=2;i*i<=n;i++)
{
if(n%i==0)
{
return false;
}
}
return true;
}
int main()
{
int n;
cin>>n;
cout<<isPrime(n)<<endl;
return 0;
}
#include<iostream>
using namespace std;
int countDivisor(int n)
{
int divisor=0,s;
for(int i=s;i<=n;i++)
{
if(n%i==0)
{
divisor++;
}
}
return divisor;
}
int main()
{
int n;
cin>>n,s;
cout<<countDivisor(n)<<endl;
return 0;
}
#include<iostream>
using namespace std;
bool isPrime(int n)
{
int c;
int i;
for(i=1;i<=n;++i)
{
if(n%i==0)
//printf("%d\n",i);
c++;
}
//cout<<isPrime(c);
//if(c<2)
//return false;
for(long long i=2;i*i<=c;i++)
{
if(c%i!=0)
{
return c;
}
}
//return c1;
}
int main()
{
int n,i,c=0,c1=0;
cout<<"enter a number";
//scanf("%d",&n);
cin>>n;
/*for(i=1;i<=n;++i)
{34
if(n%i==0)
//printf("%d\n",i);
c++;
}*/
cout<<isPrime(n);
return 0;
}

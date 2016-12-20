/*#include<stdio.h>
int main()
{
   int array[5];
   scanf("%d",&array[5]);
   printf("%d",array[5]);
   return 0;
}
*/
/*#include<stdio.h>
int main()
{
    ll t, n, i, j, k, l, x, y, ans;
    bool f[110][110];
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<110;i++)
        {
                for(j=0;j<110;j++)
                f[i][j]=0;
        }
        scanf("%lld",&n);
        for(l=1;l<=n;l++)
        {
            scanf("%lld%lld%lld",&i,&j,&k);
            for(x=i;x<j;x++)
            {
                for(y=0; y<k; y++)
                {
                    if(f[x][y]==0)
                    {
                        f[x][y]=1;
                    }
                }
            }
        }
        ans=0;
        for(i=0;i<110;i++)
        {
            for(j=0;j<110;j++)
            {
                if(f[i][j]==1)
                {
                ans=ans+1;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
*/
/*#include<iostream>
using namespace std;
class student
{

    int roll,marks[10];
    public:
    student()
    {
      roll=0;
      for(int i=0;i<10;i++)
      {
          marks[i]=0;
      }
    }
    void input(int r,int marks[1212])
    {
        roll=r;
        for(int i=0;i<10;++i)
        {
            marks[i]=mark[i];
        }
    }
    void output()
    {
        cout<<"Roll:"<<roll;
    }
    void output()
    {
        cout<<roll<<marks<<endl;
    }
};
int main()
{
    student a,b;
    a.output();
}
*/
/*#include<iostream>
using namespace std;
class d_metric;
class d_imperial
{
int feet,inch;
public:
    void input(int f=0,int i=0)
    {
        if(f==0)
        {
            cout<<"Enter distance imperial:";
            cin>>feet>>inch;
        }
        else
        {
            feet =f;
            inch =i;
        }
    }
    void output()
    {
        cout<<feet<<"feet"<<endl<<inch<<"inch"<<endl;
    }
    friend d_metric adder(d_imperial a,d_metric b);
};
class d_metric
{
int meter,centimeter;
public:
void input(int m=0,int cm=0)
    {
        if(m==0)
        {
            cout<<"enter distamce metric system:";
            cin>>meter>>centimeter;
        }
        else
        {
            meter=m;
            centimeter=cm;
        }


    }
    void output()
    {
        cout<<meter<<"Meter"<<centimeter<<"Centimeter"<<endl;
    }
    friend d_metric adder(d_imperial a,d_metric b);
};
d_metric adder(d_imperial a,d_metric b)
{
    double x=(a.feet*12+a.inch)*2.54;
    int m=x/100;
    int cm=(int)x%100;
    m+=b.meter;
    cm+=b.centimeter;
    m+=cm/100;
    cm=cm%100;
    d_metric result;
    result.input(m,cm);
    return result;
}
int main()
{
    d_imperial x;
    d_metric p,q;
    x.input();
    x.output();
    p.input();
    p.output();
    q=adder(x,p);
    q.output();
    return 0;
}
*/
#include <cstdio>
#include <algorithm>
using namespace std;
typedef     long long       LL;
const int MAXN=1e5+3;
int n,mx,cnt[MAXN]={0};
LL memo[MAXN]={0};
LL fn(int idx)
{
if(idx>mx)
{
    return 0;
}
if(memo[idx])
{
    return memo[idx];
}
return memo[idx] = max(fn(idx+1), idx * LL(cnt[idx]) + fn(idx+2));
}
int main()
{
//freopen("input.txt", "r", stdin);
scanf("%d", &n);
int tmp;
mx=0;
for(int i=0;i<n;++i)
        {
        scanf("%d", &tmp);
        ++cnt[tmp];
        mx = max(mx, tmp);
        }
        printf("%I64d\n", fn(1));





    return 0;


}

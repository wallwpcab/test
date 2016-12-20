/*#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
char whereMatches(int x1, int y1, int x2, int y2)
{
if(x1 == x2 && y1 == y2) return 'b';
if(x1 == x2) return 'x';
if(y1 == y2) return 'y';
return 0;
}
void f2()
{
int x1, y1, x2, y2;
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
char match = whereMatches(x1, y1, x2, y2);
if(match) puts("-1");
else printf("%d\n", abs(x1-x2) * abs(y1-y2));
}
void f3()
{
int x1, y1, x2, y2, x3, y3;
scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
auto lambda = [](int x1, int y1, int x2, int y2, int x3, int y3) ->bool
{
if(!whereMatches(x1, y1, x2, y2)) {
if(whereMatches(x3, y3, x1, y2) == 'b' || whereMatches(x3, y3, x2, y1) == 'b')
printf("%d\n", abs(x1-x2) * abs(y1-y2));
else puts("-1");
return true;
}
return false;
};
if(lambda(x1, y1, x2, y2, x3, y3)) return;
if(lambda(x1, y1, x3, y3, x2, y2)) return;
if(lambda(x2, y2, x3, y3, x1, y1)) return;
puts("-1");
}
void f4()
{
int x1, y1, x2, y2, x3, y3, x4, y4;
scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
auto lambda = [] (int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) -> bool {
if(!whereMatches(x1, y1, x2, y2)) {
if((whereMatches(x3, y3, x1, y2) == 'b' && whereMatches(x4, y4, x2, y1))
|| (whereMatches(x4, y4, x1, y2) == 'b' && whereMatches(x3, y3, x2, y1))) {
printf("%d\n", abs(x1-x2) * abs(y1-y2));
}
else puts("-1");
return true;
}
return false;
};
if(lambda(x1, y1, x2, y2, x3, y3, x4, y4)) return;
if(lambda(x1, y1, x3, y3, x2, y2, x4, y4)) return;
if(lambda(x1, y1, x4, y4, x3, y3, x2, y2)) return;
if(lambda(x2, y2, x3, y3, x1, y1, x4, y4)) return;
if(lambda(x2, y2, x4, y4, x1, y1, x3, y3)) return;
if(lambda(x3, y3, x4, y4, x1, y1, x2, y2)) return;
puts("-1");
}
int main()
{
int n;
scanf("%d", &n);
if(n == 1) scanf("%*d %*d"), puts("-1");
else if(n == 2) f2();
else if(n == 3) f3();
else f4();
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,i,s1=0,s,s2=0;
while(scanf("%d%d",&a,&b))
{
if((a>=0 && b>=0) && (a!=0 || b!=0) && (a!=0 && b!=0))
{
for(i=b;i<=a;i++)
{
s=i;
s1+=i;
printf("%d",s);
}
printf(" sum=%d\n",s1);
s1=0;
}
else
{
break;
}
}
return 0;
}*/



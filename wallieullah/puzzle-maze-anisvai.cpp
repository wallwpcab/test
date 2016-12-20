#include<bits/stdc++.h>
using namespace std;
int main()
{
char maze;
int sum=0;
while(scanf("%c",&maze)!=EOF)
{
if(maze>47&&maze<58)
{
sum+=maze-48;
}
else if(maze =='b')
{
while(sum--)
cout<<" ";
++sum;
}
else
{
while(sum--)
cout<<maze;
++sum;
}
}
return 0;
}

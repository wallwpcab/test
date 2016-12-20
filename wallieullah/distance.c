/*#include<stdio.h>
int main()
{
int x,y;
while(scanf("%d",&x)!=EOF)
{
y=2*x;
printf("%d\n",y);
}
return 0;
}
*/
#include<stdio.h>
#include<string.h>
int countDivisor(int n)
{
int divisor=0;
for(int i=1;i<=n;i++)
{
if (n%i==0)
{
divisor++;
}
}
return divisor;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countDivisor(n));
}

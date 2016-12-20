#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
#include<string.h>
int main()
{
int T,i,s=0;
while(scanf("%d",&T)!=EOF)
{
for(i=1;i<=6;i++)
{
if(T%2==0)
{
T=T+1;
T++;
}
printf("%d",T-1);
}
printf("\n");
}
return 0;
}

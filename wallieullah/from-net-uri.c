/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int main()
{
int x1, x2, y1, y2, x, y;
while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
{
x=x1-x2;
y=y1-y2;
if(x1==0&&x2==0&&y1==0&&y2==0)
break;
else if(x1==x2 && y1==y2)
printf("0\n");
else if(x!=0&&y/x==1||y/x==-1)
printf("1\n");
else if(y==0||x==0)
printf("1\n");
else
printf("2\n");
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
int big_mod(int base,int power,int mod)
{
if(power==0)
return 1;
else if(power%2==1)
{
int p1=base%mod;
int p2=(big_mod(base,power-1,mod))%mod;
return (p1*p2)%mod;
}
else if(power%2==0)
{
int p1=(big_mod(base,power/2,mod))%mod;
return (p1*p1)%mod;
}
}
int main()
{
long long int base,power,mod;
scanf("%ld%ld%lld",&base,&power,&mod);
//big_mod(base,power,mod);
printf("%d",big_mod(base,power,mod));
}


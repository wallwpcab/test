/*#include<stdio.h>
#include<string.h>
int main()
{
int j,s;
char string[100];
while(scanf("%s",string)!=EOF)
{
s=strlen(string);
for(j=0;j<=strlen(string);j++)
{
if(string[j]=='H'||string[j]=='Q'||string[j]=='9')
{
printf("YES\n");
break;
}
else
{
printf("NO\n");
break;
}
}
}
return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
int main()
{
int a,i,sum=1,count=0,Test,j;
scanf("%d",&T);
for(j=1;j<=Test;j++)
{
scanf("%d",&a);
for(i=0;i<=a;i++)
{
a--;
sum=sum+a;
count++;
}
printf("Case %d %d\n",j,count-1);
sum=1;
count=0;
}
return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
int t=0,n=0;
printf("Enter the no. of total walls:");
scanf("%d",&n);
printf("Enter the no. of test case:");
scanf("%d",&t);
int k,a=0,b=0;
for(k=0;k<10;k++)
{
{
printf("case %d: %d\n",t+1,a);
scanf("%d",&a);
}
{
printf("case %d: %d\n",t+1,b);
scanf("%d",& b);
}
}
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int T,a,b,c;
int f[100][100];
//int s=1,n=0;
scanf("%d",&T);
while(T--)
{
for()
scanf("%d%d%d",&a,&b,&c);
if(a&&b==1 || b&&c==1 || c&&a==1 || a&&b&&c==1)

}
printf("%d",T);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int T,a,b,c;
int f[100][100];
int i,j;
scanf("%d",&T);
while(T--)
{
for(i=0;i<=T;i++)
{
for(j=0;j<=T;j++)
{
scanf("%d%d%d",&a,&b,&c);
break;
if(f[a]&&f[b]==1 || f[b]&&f[c]==1 || f[c]&&f[a]==1 || f[a]&&f[b]&&f[c]==1)
f[i][j]++;
printf("%d\n",f[i][j]);
}
}
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int T,count=0,c1=0,i;
char s[100];
scanf("%d%s",&T,s);
for(i=0;i<T-1;i++)
{
if(s[i]==s[i+1])
count++;
}
printf("%d",count);
return 0;
}



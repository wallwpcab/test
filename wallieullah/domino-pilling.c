#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
int main()
{
int t,n=0,n1=0,n2[23];
char s1[101];
scanf("%d",&t);
while(t--)
{
scanf("%s",s1);
n=strlen(s1);
n2[23]=n;
n1=strlen(s1)-2;
if(strlen(s1)>10)
printf("%c%d%c\n",s1[0],n1,s1[strlen(s1)-1]);
else
printf("%s\n",s1);
}
return 0;
}

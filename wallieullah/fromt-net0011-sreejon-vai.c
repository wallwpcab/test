/*#include<stdio.h>
#include<string.h>
#define MAX 10001
int main()
{
int tc, i;
char a[MAX], dump;
scanf("%d%c", &tc, &dump);
for(i=1;i<=tc;i++)
{
gets(a);
if((a[0]=='o'&&a[2]=='e')||(a[0]=='o'&&a[1]=='n')||(a[1]=='n'&&a[2]=='e')&&strlen(a)==3)
printf("1");
else if(strlen(a)==5)
printf("3");
else
printf("2");
printf("\n");
}
return 0;
}
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
int tc,i,K,sum;
char s[MAX];
sum=0;
scanf("%d",&tc);
for(i=1;i<=tc;i++)
{
scanf("%s",s);
if(strcmp(s,"donate")==0)
{
scanf("%d", &K);
sum=sum+K;
}
else
printf("%d\n", sum);
}
return 0;
}*/
#include<stdio.h>
int main()
{
    int x=10,y;
    y=--x;
    y=--x;
    y=x++;
    y=++x;
    printf("%d",y);
    return 0;
}

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
int main()
{
char animals[4][5];
int i,j,count=0;
//freopen("new.txt","r", stdin);
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
scanf("%c",&animals[i][j]);
}
getchar();
}
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(animals[i][j]=='*')
{
count++;
}
}
}
printf("%d\n", count);
return 0;
}

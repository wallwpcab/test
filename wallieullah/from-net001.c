#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
#include <string.h>
int main()
{
int i,l,T,exit;
char str[1000];
char ch;
scanf("%d",&T);
while((T--))
{
gets(str);
scanf("%c",&ch);
l = strlen(str);
exit = 0;
for(i=0;i<l;i++)
{
if(str[i]==ch)
exit++;
}
if(!(exit))
printf("'\%c\' is not present\n",ch);
else
printf("Occurrence of '\%c\' in 'hello world' = %d\n",ch,exit);
}
return 0;
}


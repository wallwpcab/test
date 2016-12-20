/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i,j;
char s[100000],new_s[100000];
while(gets(s))
{
i=j=0;
while( s[i] != '\0' )
{
if( s[i] != ' ')
new_s[j++] = s[i];
else
{
new_s[j++] = '\0';
strrev(new_s);
printf("%s",new_s);
printf(" ");
j = 0;
}
i++;
}
new_s[j] = '\0';
printf("%s\n",strrev(new_s));
}
return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[12],s1[12];
scanf("%s%s",s,s1);
strrev(s);
if(strcmp(s,s1)==0)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
char text[20],test[20];
gets(text);
gets(test);
strcpy(test,text);
strrev(test);
if(strcmp(text,strrev(test))==0)
printf("YES\n");
else
printf("NO\n");
return 0;
}*/

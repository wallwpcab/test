#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<time.h>
int main()
{
char Name[]={'S','I','F','A','T'};
int i,length;
printf("%s\n",Name);
length=5;
for(i=0;i<length;i++)
{
if(Name[i]>=97&&Name[i]<=122)
{
Name[i]='A'+(Name[i]-'a');
}
}
printf("%s\n",Name);
return 0;
}

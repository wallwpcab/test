#include<stdio.h>
#include<string.h>
int main()
{
char i,A,E,I,O,U,a,e,o,u;
char string[100];
while(scanf("%s",string)!=EOF)
{
for(i=0;i<100;i++)
{
if(string[i]=='A')
{
puts(".");
}
else if(string[i]=='E')
{
 puts(".");
}
else if(string[i]=='I')
{
puts(".");
}
else if(string[i]=='O')
{
puts(".");
}
else if(string[i]=='U')
{
puts(".");
}
else if(string[i]=='a')
{
puts(".");
}
else if(string[i]=='e')
{
puts(".");
}
else if(string[i]=='i')
{
puts(".");
}
else if(string[i]=='o')
{
puts(".");
}
else
{
puts(".");
}
printf("%s",string[i]);
}
}
return 0;
}




#include<stdio.h>
int main()
{
int i,size,j,t;
scanf("%d",&t);
for(j=0;j<t;j++)
{
scanf("%d",&size);
char string[size];
printf("enter your string:\n");
scanf("%s",string);
for(i=0;i<size;i++)
{
printf("%c\n",string[i]);
}
}
return 0;
}

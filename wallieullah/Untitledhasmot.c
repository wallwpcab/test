#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
#include<stddef.h>
#include<errno.h>
#include<complex.h>
int main()
{
int a,b;
while(scanf("%d%d",&a,&b)!= EOF)
{
if(a>b)
printf("%d\n",abs(a-b));
else
printf("%d\n",abs(b-a));
}
return 0;
}



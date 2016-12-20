#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#include<malloc.h>
int main()
{
int size,i,search=0;
printf("Enter your size:");
scanf("%d",&size);
int array[size];
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
printf("Enter your search item:");
scanf("%d",&search);
for(i=0;i<size;i++)
{
if(array[i]==search)
{
printf("the search item is %d\n location is %d\n",search,i+1);
}
}
for(i=0;i<size;i++)
{
if(array[i]==size)
{
printf("item not found");
}
break;
}
return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int array[6]={1,2,3,4,4,3};
int size,search,k,n=5;
printf("enter item");
scanf("%d",&size);
k=1;search=0;
while(search==0&&k<=n)
{
if(item==array[k])
search=k;
k=k+1;
if(search==0)
{
printf("item is not in the array");
else
{
printf("%d is the location of item",loc);
}
}
}
return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
//#include<string.h>
int main()
{
int t, i, len;
char s[5];
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%s",s);
getchar();
len=strlen(s);
if(len==5)
printf("3\n");
else if((s[0]=='o'&&s[1]=='n'&&s[2]!='e')||(s[0]=='o'&&s[1]!='n'&&s[2]=='e')||(s[0]!='o'&&s[1]=='n'&&s[2]=='e')||(s[0]=='o' && s[1]=='n' && s[2]=='e') && len==3)
printf("1\n");
else if((s[0]=='t'&&s[1]=='w'&&s[2]!='o')||(s[0]=='t' && s[1]!='w' && s[2]=='o')||(s[0]!='t' && s[1]=='w' && s[2]=='o')||(s[0]=='t' && s[1]=='w' && s[2]=='o') && len==3)			printf("2\n");
else
break;
}
return 0;
}


























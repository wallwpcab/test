#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<time.h>
bsearch(int b[10],int l,int h,int item)
{
if(l<=h)
{
int mid=(l+h)/2;
if(b[mid]==item)
return (mid+1);
else if(b[mid]>item)
return bsearch(b,l,mid-1,item);
else
return bsearch(b,mid+1,h,item);
}
else
return -1;
}
main()
{
int s,loc,i,search;
printf("how many element in your search:");
scanf("%d",&s);
int a[s];
printf("\nEnter your elements:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter your search item:");
scanf("%d",&search);
loc=bsearch(a,0,s-1,search);
if(loc!=1)
printf("\nYour search item %d is located at %d.\n",search,loc);
else
printf("\nItem %d is not found.\n",search);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int total=0;
void tower(int N,int beg,int aux,int end)
{
if(N==1)
{
printf("%d------->%d\n",beg,end);
total++;
return 0;
}
else
{
tower(N-1,beg,end,aux);
printf("%d------>%d\n",beg,end);
total++;
tower(N-1,aux,beg,end);
return 0;
}
}
int main()
{
int N,beg=1,aux=2,end=3;
printf("please enter the number of disks for the tower\n");
scanf("%d",&N);
tower(N,beg,aux,end);
printf("\n\n total steps needed: %d\n\n\n",total);
return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i,j;
char s[100000],new_s[100000];
while(gets(s))
{
i=j=0;
while(s[i]!= '\0' )
{
if(s[i]!= ' ')
new_s[j++]=s[i];
else
{
new_s[j++] = '\0';
strrev(new_s);
printf("%s",new_s);
printf(" ");
j=0;
}
i++;
}
new_s[j] = '\0';
printf("%s\n",strrev(new_s));
}
return 0;
}*/


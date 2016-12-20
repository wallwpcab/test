#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct Node
{
int age;
struct Node *link;
}list;
void insert(list *start,int n)
{
int i,j;
list *tmp,*help;
tmp=start;
for(i=1;i<=n;i++)
{
help=malloc(sizeof(list));
scanf("%d",&j);
help->age=j;
if(start==NULL)
{
start==help;
start->link=NULL;
}
else
{
while(tmp->link!=NULL)
tmp=tmp->link;
help->link=NULL;
tmp->link=help;
}
}
}
int main()
{
list *head=NULL;
insert(head,5);
return 0;
}

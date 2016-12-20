#include<stdio.h>
#define MAXN 5
int st[MAXN],limit=MAXN-1,idx=-1;
void push(int n)
{
idx++;
st[idx]=n;
printf("Successfully pushed value\n");
}
void pop()
{
if(idx<0)
{
printf("Sorry,the stack is empty\n");
}
else
{
printf("Popped value is:%d\n", st[idx]);
idx--;
}
}
int main()
{
int choice,flag=1,val,i;
while(flag)
{
printf("Options:1 for Push,2 for Pop,3 for displaying the stack and 4 for Exit\n\n");
printf("Your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(idx==limit)
{
printf("Sorry,there is no more room in the stack\n");
}
else
{
printf("Enter the push value: ");
scanf("%d",&val);
push(val);
}
break;
case 2:
pop();
break;
case 3:
if(idx<0)
{
printf("Currently the stack is empty\n");
}
else
{
printf("Current Stack:");
for(i=0;i<=idx;i++)
{
printf("%d",st[i]);
}
printf("\n");
}
break;
case 4:
printf("Thank You\n");
flag=0;
break;
default:
printf("Wrong Input,Please try again\n\n");
break;
}
}
return 0;
}

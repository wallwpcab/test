#include<stdio.h>
#include<stdlib.h>
int main()
{
int data[100],i,n,item,loc;
printf("Enter size of elements in array");
scanf("%d",&n);
printf("%d Enter sorted elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&data[i]);
}
printf("enter insert item:");
scanf("%d",&item);
printf("enter location to insert item:");
scanf("%d",&loc);
for(i=n-1;i>=loc;i--)
{
data[i+1]=data[i];
}
data[loc-1]=item;
printf("new array");
for(i=0;i<n;i++)
{
printf("%d",data[i]);
}
return 0;
}


#include<stdio.h>
void binary (int data[],int size);
int main()
{
int i,search,size,low,middle,high;
printf("Enter the array size\n");
scanf("%d",&size);
int data[size],loc=-1;
for(i=0;i<size;i++)
{
scanf("%d",&data[i]);
}
binary(data,size);
}
void binary (int data[],int size)
{
int i,search,low,middle,high,loc=-1;
printf("enter your search item\n");
scanf("%d",&search);
low=0;
high=size-1;
while(low<=high && loc==-1)
{
middle=(low+high)/2;
if(data[middle]==search)
{
loc=middle+1;
printf("%d search item and loc is %d",search,loc);
}
else if(search<data[middle])
{
high=middle-1;
}
else
{
low=middle+1;
}
}
if(loc==-1)
{
printf("item not found");
}
}




#include<stdio.h>
int count,reverse;
int rev(int num)
{
int rem;
reverse=0;
for(int i=1;num!=0;i++)
{
rem=num%10;
num/=10;
reverse=reverse*10+rem;
}
return reverse;
}
void pelindrome(int num)
{
count++;
int temp,sum=0;
temp=num;
sum=num+rev(num);
if(sum==rev(sum))
{
printf("%d %d\n",count,reverse);
}
else
{
pelindrome(sum);
}
}
int main()
{
int num,test;
scanf("%d",&test);
for(int i=1;i<=test;i++)
{
scanf("%d",&num);
count=0;
pelindrome(num);
}
return 0;
}

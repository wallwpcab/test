#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,t,f=1,s1,s2,count=0;
scanf("%d%d",&a,&b);
//printf("%d\n%d\n",a,b);
for(i=a;i<=b;i++)
{
//printf("%d\n",i);
//for(i=1;i<=b;i++)
//{
while(i>0)
{
s1=i/=10;
s2=i%=10;
if((s1+s2)%2!=0)
{
count++;
}
}
//}
}

//printf("Each digits of given number are:");
printf("%d",count);
return 0;
}
/*#include<stdio.h>
int main()
{
int num,temp,factor=1;
printf("Enter a number: ");
scanf("%d",&num);
temp=num;
while(temp)
{
temp=temp/10;
factor = factor*10;
}
printf("");
while(factor>1)
{
factor=factor/10;
printf("%d",num/factor);
num=num%factor;
}

return 0;
}
/*int value = 123;
while (value > 0) {
 int digit = value % 10;
 // do something with digit
 value /= 10;
}*/

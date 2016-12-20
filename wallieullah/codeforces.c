/*#include<stdio.h>
int main()
{
int n,a,p;
int money=0,price=101;
scanf("%d",&n);
while(n--)
{
scanf("%d %d",&a,&p);
if(price>p)
{
price=p;
}
money+=price*a;
}
printf("%d",money);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int t,array[10]={0},i,cin=0,cout=0;
scanf("%d",&t);
//while(t--)
for(i=0;i<t;i++)
{
scanf("%d",&array[i]);
//printf("%d",array[i]);
if(array[i]>10&&array[i]<20)
{
    cin++;
}
else
{
    cout++;
}
//printf("%d\n%d\n",cin,cout);
}
printf("%d\n%d\n",cin,cout);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int t,a[89]={0},i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&a[i]);
if(a[i]>0)
{
printf("Fib(%d) = %d\n",a[i],a[i]-1);
}
else
{
printf("Fib(0)=0\n");
}
}
return 0;
}
*/
#include<stdio.h>
int main()
{
int a[100]={0},i,num,largest;
for(i=1;i<=10;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=0;i<=10;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
}
for(i=0;i<=10;i++)
{
if(a[i]==largest)
{
printf("the search item is %d\n location is %d\n",largest,i);
}
}
return 0;
}

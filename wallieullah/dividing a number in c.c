/*#include<stdio.h>
int main()
{
	int a,b,c,d,count=0,c1=0;
	scanf("%d%d",&a,&b);
	while(b--)
	{
	scanf("%d%d",&c,&d);
	if(c<d)
	//printf("yes\n");
	//goto abc;
	count++;
	if(c>d)
	c1=1;
	//printf("no\n");
//	goto bcd;
	}
	if(c1)
	printf("no\n");
	else
	printf("yes\n");
//	abc:printf("yes\n");
//	bcd:printf("no\n");
	 
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	printf("%d",(t+1)/2);
	return 0;
}



























/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,i,sum=0,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&a,&b);
    if(a<b)
    {
    for(i=a;i<b;i++)
    {

        if(i%2!=0)
        sum=sum+i;


    }
    printf("%d\n",sum);
    sum=0;
    }
    else if(a>b)
    {
    for(i=a-1;i>b;i--)
    {

        if(i%2!=0)
        sum=sum+i;


    }
    printf("%d\n",sum);
    sum=0;
    }
    }
    sum=0;
    return 0;
}*/
/*PROGRAM FOR PRIME NUMBER using FUNCTION **/
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int prime(int x);
    int n,f;
    clrscr();
    printf(" ENTER THE ANY NUMBER \n");
    scanf("%d",&n);
    f=prime(n);
    if(f==1)
	printf(" NUMBER IS PRIME \n");
    else
	printf("NUMBER IS NOT PRIME \n");
    getch();
    }

int prime(int x)
{
       int i,a,r=0;
	a=sqrt(x);
       if((x==1)||(x==2))
	  return(0);
       else
       {
	     for(i=2;i<=a;i++)
		if(x%i==0)
		    return(0);
		return(1);
	}
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,T,sum;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d",&a,&b);
    if(a<b)
    {

    for(i=a;i<b;i++)
    {
        if(i%2!=0)

        printf("%d\n",i);

    }

    }
    else if(a>b)
    {
    for(i=a-1;i>b;i--)
    {

        if(i%2!=0)
        printf("%d\n",i);
else
    printf("0\n");
    }


    }

    }

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        //printf("%d",i);
        if(a%i==0)
        printf("%d\n",i);
    }
    return 0;
}
*/




















































/*#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int number,count;
int numbers[5];
printf("Please enter a number:");
scanf("%d", &number);
for(count=4;count>=0;count--)
{
if(number<=0)
numbers[count] = 0;
numbers[count] = number % 10;
number /= 10;
}
for(count=0;count<5;count++)
printf("%d",numbers[count]);
return 0;
}*/


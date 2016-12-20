/*#include<stdio.h>
int main()
{
int i,n;
float sum=0;
printf("\nValue of N:  ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum +(float)(1/i);
if(i==1)
printf("\n 1 +");
else if(i==n)
printf(" (1/%d)  ",i);
else
printf(" (1/%d) + ",i);
}
printf("=%.2f",sum);
printf("\n\n THE SUM OF THIS SERIES IS %.2f",sum);
return 0;
}*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int t,i,y;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
while((scanf("%d", &y)==1))
{
if((y%4==0&&y%100!=0&&y>=2000)||y%400==0)
{
if(y%15==0)
{
printf("this is leap year.\nthis is huluculu festival year.\n");
}
else
printf("this is leap year.\n");
}
else if((y%4!=0&&y%100!=0&&y>=2000)||y%400!=0)
{
if(y%15==0)
printf("this is huluculu festival year.\n");
else if(y%55==0)
printf("this is bulukulu festival year.\n");
else
printf("this is an ordinary year.\n");
}
}
}
return 0;
}
/*#include <stdio.h>
#include <stdbool.h>
int main(void)
{
bool a=false, b=true;
printf("%d\n", a&&b);
printf("%d\n", a||b);
printf("%d\n", !b);
}*/
/*#include<stdio.h>
#include<conio.h>
int main()
{
unsigned char ch=212;
printf("%u",ch);
return 0;
}*/



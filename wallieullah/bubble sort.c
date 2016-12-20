#include<stdio.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a,count=0,s,i,b;
	while(scanf("%d",&a)!=EOF)
	{
		if(a>10)
		{
			if((a/10)!=3)
			{
				for(i=0;i<=a;i++)
				{
					s=0;
					a--;
					s+=a;
					s++;
				}
				printf("%d",s);
			}
		}
		else
		{
			if(a%3==0)
			{
				b=a-1;
				printf("%d\n",a);
			}
			else
			{
				printf("%d\n",b);
			}
			else
			{
				printf("%d\n",a);
			}
		}
	}
	return 0;
}




















































#include<stdio.h>
int main()
{
int s,temp,i,j,a[20];
printf("Enter total numbers of elements: ");
scanf("%d",&s);
printf("Enter %d elements:",s);
for(i=0;i<s;i++)
scanf("%d",&a[i]);
for(i=s-2;i>=0;i--)
{
for(j=0;j<=i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("After sorting: ");
for(i=0;i<s;i++)
printf(" %d",a[i]);
return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
float a,b,c;
float x,y,z;
float A,B,C;
while(n--)
{
scanf("%f%f%f",&a,&b,&c);
x=(a*a)+(b*b)-(c*c)/(2*a*b);
y=(b*b)+(a*a)-(c*c)/(2*b*a);
z=(c*c)+(a*a)-(b*b)/(2*c*a);
A=acos(x);
B=acos(y);
C=acos(z);
if(A==90.00 || B==90.00 || C==90.00)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,i,s=0,s1;
scanf("%d",&a);
for(i=1;i<=9;i++)
{
s=a%i;
if(a%i==0)
{
s++;
}
else
{
printf("o");
}
//printf("%d",s);
}
printf("%d",s);
return 0;
}*/


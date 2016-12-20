//sum =1-x3/3!+x5/5!-x7/7!+......
#include<stdio.h>
#include<math.h>
int factorial(int n)
{
int f,r;
if(n==1)
return 1;
else
{
f=r*factorial(n-1);
return f;
}
}
int main()
{
int i,j,terms,x,c;
float result,sum=0.0;
printf("Enter no. of terms:");
scanf("%d",&terms);
printf("Enter value of X:");
scanf("%d",&x);
for(i=1;j=1;j<=terms;i=i+2,j++)
{
c=factorial(i);
if(j%2!=0)
sum+=pow(x,i)(float)c;
else
sum-=pow(x,i)(float)c;
}
printf("\n Result: %f\n",sum);
return 0;
}
}

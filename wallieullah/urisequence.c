/*#include<stdio.h>
int main()
{
int I,J,n;
scanf("%d%d\n",&I,&J);
for(I=1;I<=25;I++)
{
for(J=1;J>=0;J--)
{
printf("%d%d\n",I,J);
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
double A;
while(scanf("%lf",&A)!=EOF)
{
if(A>25 && A<=50)
{
printf("Intervalo (25,50]\n");
}
else if(A>=0 && A<=25)
{
printf("Intervalo [0,25]\n");
}
else if(A>=75 && A<=100)
{
printf("Intervalo [75,100]\n");
}
else if(A>50 && A<=75)
{
printf("Intervalo [50,75]\n");
}
else
{
printf("Fora de intervalo\n");
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int i,count=0,s,n;
double s1=0.0,s2;
double a[6];
for(i=1;i<=6;i++)
{
scanf("%lf",&a[i]);
if(a[i]>0)
{
s=count++;
}
s1+=a[i];
}
s2=s1/s;
printf("%dvalores positivos\n%lf\n",count,s2);
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a=-1,b=1,s=0,i,n;
while(scanf("%d",&n)!=EOF)
{
for(i=0;i<n;i++){
s=a+b;
a=b;
b=s;
printf("%2d",s);
}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int n;
float i, sum, t;
sum=0;
for(i=1;i<=100;i++)
{
t=1/(float)i;
sum=sum+t;
}
printf("%.2f\n",sum);
}*/
/*#include<stdio.h>
int main()
{
int a,b,i,s,j;
while(scanf("%d",&a)!=EOF)
{
for(i=1;i<7;i++)
{
s=a;
for(j=s;j>=s;j++)
{
if(i%2!=0)
{

}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,i;
while(scanf("%d",&a)!=EOF)
{
for(i=1;i<=6;i++)
{

}

}
}*/
#include<stdio.h>
int main()
{
int T,a,s,i,s1;
scanf("%d",&T);
while(T--)
{
scanf("%d",&a);
for(a=1;a<=2000;a++)
{
s=a;
s--;
}
printf("%d",s-1998);
s=1;
}
return 0;
}


/*#include<stdio.h>
int main()
{
int a[100]={0},i,num,largest;
for(i=1;i<=100;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=0;i<=100;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
}
for(i=0;i<=100;i++)
{
if(a[i]==largest)
{
printf("%d\n%d\n",largest,i);
}
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int T,a;
    while(scanf("%d",&T)!=EOF)
    {
    while(T--)
    {
        scanf("%d",&a);
        if((a%1==a) && (a%a==1))
        {
            printf("%d eh primo\n",a);
        }
        else
        {
            printf("%d nao eh primo\n",a);
        }
    }
    }
    return 0;
}*/
/*#include <iostream>
#include <math.h>
int main()
{
int n,p;
int cont;
std::cin >> n;
for(int i=0;i<n;i++)
{
std::cin>>p;
cont=0;
for(int i=1;i<sqrt(p);i++)
{
if(p%i == 0)
cont++;
if(cont>1)
break;
}
if(cont == 1)
std::cout<<p<<" eh primo\n";
else std::cout << p << " nao eh primo\n";
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
int T,array[10]={2,3,4,5,6,7,8,9};
long long int a;
scanf("%d",&T);
while(T--)
{
scanf("%lld",&a);
if(a%array[0]==0 || a%array[1]==0 ||a%array[3]==0 ||a%array[4]==0 ||a%array[5]==0 ||a%array[6]==0 ||a%array[7]==0)
{
printf("Not Prime\n");
}
else if(a%a==0&&a%1==0)
{
printf("Prime\n");
}
else
printf("Not Prime\n");
}
return 0;
}

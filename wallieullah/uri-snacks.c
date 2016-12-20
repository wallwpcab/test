#include<stdio.h>
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
    printf("%d valores positivos\n%lf\n",count,s2);
    return 0;
}






















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
}
*/

/*#include<stdio.h>
int main()
{
float x1,x2,y1,y2,c,a,b;
while(scanf("%f%f%f%f",&x1,&x2,&y1,&y2)!=EOF)
{
a=x2-x1;
b=y2-y1;
c=sqrt(a)+sqrt(b);
printf("%.4f\n",c);
}
return 0;
}*/
#include<stdio.h>
int main()
{
    int a,i,k,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<a;i++)
        {
            for(j=1;j<a;j++)
            {
                for(k=1;k<a;k++)
                {
                  i=i+1;
                  j=j*j+3;
                  k=k*k+4;

                }
            }
        }
         printf("%d%d%d",i,j,k);

    }
    return 0;
}

#include<stdio.h>
 int main()
{
    double x1,y1,x2,y2,d,s1,s2,d1;
     while(scanf("%lf %lf %lf %lf",&x1,y1,x2,y2)!=EOF)
     {

           s1=(x2-x1)*(x2-x1);
             s2=(y2-y1)*(y2-y1);
               d=(s1+s2);
                d1=sqrt(d);
                 printf("%.4lf\n",d1);
     }
               return 0;
}

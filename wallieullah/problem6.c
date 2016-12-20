#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,x,x1,x2,x3,x4;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    printf("Enter the value of C:");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    x=-b/(float)(2*a);
    if(d==0)
    {
        printf("\n x=%.2f\n",x);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(float)(2*a);
        x2=(-b-sqrt(d))/(float)(2*a);
        printf("\nx=%.2f\nx=%.2f\n",x1,x2);
    }
    else
    {
        printf("\n ROOTS ARE IMAGINARY\n");
        d=d*(-1);
        x3=(-b+sqrt(d))/(float)(2*a);
        x4=(-b-sqrt(d))/(float)(2*a);
        printf("\nX=%.2f\n x=i%.2f\n",x3,x4);

    }
    return 0;
}

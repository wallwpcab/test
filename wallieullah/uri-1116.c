#include<stdio.h>
int main()
{
    float X,Y,div;
    int i;
    scanf("%d",&i);
    while(i--)
    {
       scanf("%f%f",&X,&Y);
       div=X/(float)Y;
       if(Y==0)
       {
        printf("divisao impossivel");
       }
       else
       {
        printf("%.1f",div);
       }

    }
    return 0;
}

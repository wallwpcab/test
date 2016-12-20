#include<stdio.h>
int main()
{
   long int R;
   double V;
    while(scanf("%ld",&R)!=EOF)
        {
        V=(4.0/3.0)*3.14159*R*R*R;
         printf("VOLUME = %.3lf\n",V);
    }
    return 0;
}

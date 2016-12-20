#include<stdio.h>
#define PI 3.14159
int main()
{
    float R,A;
     while(scanf("%f",&R)!=EOF){
       A=PI*R*R;
       printf("%f",A);
   }
    return 0 ;

}

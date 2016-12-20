#include<stdio.h>
int main()
{
    int NUMBER,HOURS;
    float AMOUNT,SALARY;
     while(scanf("%d %d %f",&NUMBER,&HOURS,&AMOUNT)!=EOF)
     {
         SALARY=(HOURS*AMOUNT);
          printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
     }

     return 0;
}

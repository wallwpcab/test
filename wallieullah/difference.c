#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENCA;
     while(scanf("%d %d %d %d",&A,&B,&C,&D)!=EOF)
        {
          DIFERENCA=(A*B)-(C*D);
            printf("DIFERENCA = %d\n",DIFERENCA);
         }
         return 0;
}

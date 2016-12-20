#include<stdio.h>
int main()
{
    int A,B,C,D,DIFERENCE;
    while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF)
    {
       DIFERENCE=(A*B-C*D);
       printf("DIFERENCE = %d\n",DIFERENCE);
    }
    return 0;
}

#include<stdio.h>
int main()
{
 int A,B,C,D;
 while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF)
 {
     if(B>C && D>A &&(C+D>A+B) && C>0 && D>0 && A%2==0)
     {
         printf("valores aceitos");
     }
     else
     {
         printf("valores  nao aceitos");
     }
 }
 return 0;
}

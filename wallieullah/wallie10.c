#include<stdio.h>
int main()
{
    int A,B,C,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d%d%d",&A,&B,&C);
    if(A>B && A>C)
        printf("Case:%d:%d",i,A);
    else if(B>A && B>C)
        printf("Case:%d:%d",i,B);
    else if(C>A && C>B)
        printf("Case:%d:%d",i,C);
     else if(A==B && B==C)
        printf("Case:%d:%d",i,A);
    else if(A==B && A>C)
        printf("Case:%d:%d",i,A);
    else if(A==B && C>A)
        printf("Case:%d:%d",i,C);
    else if(B==C && C>A)
        printf("Case:%d:%d",i,C);
    else if(B==C && A>C)
        printf("Case:%d:%d",i,C);
     else if(A==C && A>B)
        printf("Case:%d:%d",i,A);
     else if(A==C && B>A)
        printf("Case:%d:%d",i,B);
    }
    return 0;
}

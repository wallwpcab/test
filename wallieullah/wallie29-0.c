#include<stdio.h>
int main()
{
    int T,Pi,i,j,n,sum=1;;
    scanf("%d%d",&T,&Pi);
    for(i=1;i<=T;i++){
        scanf("%d",&Pi);
    }
      for(j=1;j<=n;j--){
        sum=sum*Pi;

    }
    printf("%d",sum);
    return 0;




}

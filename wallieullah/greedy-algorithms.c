/*#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,S,num[100],d[100];
    scanf("%d",&S);
 //   while(S!=0)
   // {
      for(i=1;i<m;)
    {
        num[i]=S/d[i];
        S=S%d[i];

    }
    printf("%d",S);
    //}

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int q,n,k=0,a,b;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        a=q%b;
        q=q/b;
        k++;
        //printf("%d",q);

    }
    return 0;
}

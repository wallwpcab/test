/*#include<stdio.h>
int main()
{

    int s,v,t,i;

    scanf("%d %d", &v, &t);

    s=v*(2*t);
    for(i=0;i<=2;i++){



    }
    printf("%d",i);

    return 0;

*/
#include<stdio.h>
int main()
{
 int v,t;
 while (scanf("%d %d",&v,&t)==2)
 {
  if ((v>=-100)&&(v<=100)&&(t>=0)&&(t<=200))
   printf("%d\n",2*v*t);
 }
 return 0;
}

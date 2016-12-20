#include<stdio.h>
 int main()
 {
int x,T;
scanf("%d",&T);
while(scanf("%d",&x)!=T)
{
if(x%2==0){
printf("1\n");
}
else
printf("2\n");
}
return 0;
}

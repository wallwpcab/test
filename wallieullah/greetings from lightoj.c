#include<stdio.h>
int main() {
int n,i;
scanf("%d",&n);
for(i=1; i<=n; i++)
{
int b;
scanf("%d",&b);
if(b>10)
printf("%d 10\n",b-10);
else
printf("0 %d\n",b);
}
return 0;
}


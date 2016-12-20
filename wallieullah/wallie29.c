#include<stdio.h>
main()
{
int h,i,A,B,C;
scanf("%d",&h);
if(h<=100)
{
for(i=0;i<h;++i)
{
scanf("%d%d%d",&A,&B,&C);
printf("Case %d:",i+1);
if(A<=200&&B<=200&&C<=200)
{
if(A>B&&A>C)
printf(" %d\n",A);
else if(B>A&&B>C)
printf(" %d\n",B);
else
printf(" %d\n",C);
}
}
}
}

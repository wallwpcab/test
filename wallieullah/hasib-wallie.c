#include<stdio.h>
int main()
{
int A,B,C;
while(scanf("%d%d%d",&A,&B,&C)!=EOF)
{
if(A<=200&&B<=200&&C<=200)
{
if(A>B&&A>C)
printf("%d",A);
else if(B>C)
printf("%d",B);
else
printf("%d",C);
{
if((A>=B&&A<=C)||(A<=B&&A>=C))
printf(" %d",A);
else if((B>=A&&B<=C)||(B<=A&&B>=C))
printf(" %d",B);
else if((C>=A&&C<=B)||(C<=A&&C>=B))
printf(" %d",C);
}
{
if(A<B&&A<C)
printf(" %d\n",A);
else if(B<C)
printf(" %d\n",B);
else
printf(" %d\n",C);
}
}
}


















}

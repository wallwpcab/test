#include<stdio.h>
int main()
{
float  n,l,s,l1,s1,l2,s2,l3,s3,l4,s4;
char ch='%';
while(scanf("%f",&n)!=EOF)
{
if(n>0 && n<=400)
{
l=(n*(0.15));
s=l+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual:15 %c\n",s,l,ch);
}
else if(n>=400.01 && n<=800.00)
{
l1=(n*(.12));
s1=l1+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual:12 %c\n",s1,l1,ch);
}
else if(n>=800.01 && n<=1200.00)
{
l2=(n*(.10));
s2=l2+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual:10 %c\n",s2,l2,ch);
}
else if(n>=1200.01 && n<=2000.00)
{
l3=(n*(.07));
s3=l3+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual:7 %c\n",s3,l3,ch);
}
else
{
l4=(n*(.04));
s4=l4+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual:4 %c\n",s4,l4,ch);
}
}
return 0;
}

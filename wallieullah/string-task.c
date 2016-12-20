#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,fact=1,fac=1,sum,m;
	while(scanf("%d%d",&n,&m)!= EOF)
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		for(j=1;i<=m;j++)
		{
		    fac=fac*j;
		}
		sum=fact+fac;
		printf("%d\n",sum);
	}
	return 0;
}





















#include<stdio.h>
int main()
{
int i,n,fact=1,j,fac=1,sum,m;
while(scanf("%d%d",&n,&m)!=EOF)
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
for(j=1;j<=m;j++)
{
fac=fac*j;
}
sum=fact+fac;
printf("%d\n",sum);
}
return 0;
}





















/*#include<stdio.h>
int main()
{
int t,i,array1[10],array2[10],array3[10];
char string[10];
scanf("%d",&t);
for(i=0;i<=t;i++)
{
scanf("%s%d%d%d",string,&array1[i],&array2[i],&array3[i]);
printf("%s\n%d\n%d\n%d\n",string,array1[i],array2[i],array3[i]);
}
return 0;
}*/
#include<stdio.h>
int main()
{
int i,n,fact=1,j,fac=1,sum,m;
while(scanf("%d%d",&n,&m)!=EOF)
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
for(j=1;j<=m;j++)
{
fac=fac*j;
}
sum=fact+fac;
printf("%d\n",sum);
}
return 0;
}

/*LightOj 1069 - Lift*/
#include<stdio.h>
int main()
{
int lift,my,come,go,i,n,time;
scanf("%d",&n);
if(n<=25)
{
for(i=1;i<=n;i++)
{
time = 0;
come = 0;
go = 0;
scanf("%d %d",&my,&lift);
if(lift>=0&&lift<=100&&my>0&&my<=100)
{
if(lift<my)
{
come=4*(my-lift);
}
else if(lift>my)
{
come=4*(lift-my);
}
else
{
come=0;
}
go = my*4;
time = 19+come+go;
printf("Case %d: %d\n",i,time);
}
else
{
break;
}
}
}
else
{
return 0;
}
return 0;
}

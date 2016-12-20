#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
while(scanf("%d%d%d",&a,&b,&c)!=EOF)
{
if((a>b&&a>c)&&(b<a&&b>c)&&(c<a&&c>b)&&(b-c<0&&a-b>0))
{
printf(":)");
}
else if((a<b&&a<c)&&(b>a&&b>c)&&(c>a&&c<b)&&(a-b<0&&b-c>0))
{
printf(":(");
}
else if((a<b&&a<c)&&(b>a&&b<c)&&(c>a&&c>b)&&(abs(a-b)>abs(b-c)))
{
printf(":(");
}
else if((a<b&&a<c)&&(b>a&&b<c)&&(c>a&&c>b)&&(abs(a-b)<abs(b-c)))
{
printf(":)");
}
else if((a>b&&a>c)&&(b<a&&b>c)&&(c<a&&c<b)&&(abs(a-b)>abs(b-c)))
{
printf(":)");
}
else if((a>b&&a>c)&&(b<a&&b>c)&&(c<a&&c<b)&&(abs(a-b)<abs(b-c)))
{
printf(":(");
}
else if((a==b&&a<b)&&(b==a&&b<c)&&(c>a&&c>b)&&(b-c<0))
{
printf(":)");
}
else
{
printf(":)");
}
}
}

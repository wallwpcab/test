#include<stdio.h>
#include<math.h>
int main()
{
int x,y,s,sum=0,i,t;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&x,&y);
s=x-1;
if(x%2!=0)
{
for(i=1;i<=y+1;i++)
{
s++;
//printf("%d",s);
if(s%2!=0)
{
sum+=s;
}
}
}
else if(x%2==0)
{
for(i=1;i<=y+3;i++)
{
s++;
//printf("%d",s);
if(s%2!=0)
{
sum+=s;
}
}
}
printf("%d\n",sum);
sum=0;
}
return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main ()
{
char s[101],t[101];
cin>>s>>t;
strrev(s);
if(strcmp(s,t)==0)
cout<<"YES";
else
cout<<"NO";
return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a[2]={0},b[2]={0},i;
    for(i=1;i<=4;i++)
    {
        //scanf("%d",&a[i]);
        //printf("%d",a[i]);
        for(i=1;i<=4;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
       // printf("%d%d",a[i],b[i]);

    }



    }

    return 0;

}*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,media;
    scanf("%d%d",&a,&b);

        if((a<0&&a>10)&&(b<0&&b>10))
        {
        printf("nota invalida");
        }
        else
        {
        media=a+b/(float)2.0;
        printf("%d",media);
        }
        return 0;
}



#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    int x,y,sum=0,s,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        s=x-1;
        if(x%2)
        {
            for(i=1;i<=y+1;i++)
            {
                s++;
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
/*#include<stdio.h> // standard input and output function //
#define pi 3.1415926535897932384626433832795
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
int i;
for(i=1;i>=n;i++)
{
float r,a,rec,s;
scanf("%f",&r);
rec=4*r*r;
a=pi*r*r;
s=rec-a;
printf("Case : %d %.2f\n",i,s);
}
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int len,count,i,j,flag=0;
        char str[1000];
        scanf("%s",&str);
        len=strlen(str);
        for(i='a';i<='z';i++)
        {
            count=0;
            for(j=0;j<len;j++)
            {
                if(str[j]==i)
                {
                    count++;
                }
            }
                if(count!=0)
                {
                    flag++;
                }
        }

            if(flag>=26)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }


    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int T,i,s1[234];
    char string[234];
    char array[21]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','u','w','x','y','z'};
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%s",string);
       // printf("%s",string);
       // strlen(string);
        //s1[234]=strlen(string);
        for(i=1;i<=T;i++)
    {

    if(string[i]==array[0])
            printf("YES");
        else
            printf("NO");
    }


    }


    return 0;
}*/






























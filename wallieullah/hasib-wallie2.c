#include<stdio.h>
typedef struct s
{
    int i;
    int j;
    int n;
    int t;
    char name[200];
};
int main()
{
    struct s s1;
    scanf("%d",&s1.t);
    if(1<=s1.t&&s1.t<=1000)
    {
        for(s1.n=0;s1.n<s1.t;s1.n++)
        {
            scanf("%s",s1.name);
            if(strlen(s1.name)<=200)
            {
            printf("Case %d:\n",s1.n+1);
            for(s1.i=0;s1.i<strlen(s1.name);s1.i++)
            {
                for(s1.j=0;s1.j<=s1.i;s1.j++)
                {
                    printf("%c",s1.name[s1.j]);
                }
                printf("\n");
            }
            }
        }
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int i=0,j,n,t;
    char name[200];
    scanf("%d",&t);
    if(1<=t&&t<=1000)
    {
        for(n=0;n<t;n++)
        {
            scanf("%s",name);
            if(strlen(name)<=200)
            {
            printf("Case %d:\n",n+1);
            for(i=0;i<strlen(name);++i)
            {
                for(j=0;j<=i;++j)
                {
                    printf("%c",name[j]);
                }
                printf("\n");
            }
            }
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
int i=0,j,n,T;
char name[200];
scanf("%d",&T);
if(1<=T&&T<=1000)
{
for(n=0;n<T;++n)
{
scanf("%s",name);
if(strlen(name)<=200)
{
printf("Case %d:\n",n+1);
for(i=0;i<strlen(name);++i)
{
for(j=0;j<=i;++j)
{
printf("%c",name[j]);
}
printf("\n");
}
}
}
}
}
*/

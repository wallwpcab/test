/*#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,i,n[100]={0},s=0,s1=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
        scanf("%d",&n[i]);
        }
        s=0;
        for(i=1;i<=a-1;i++)
        {
        s1=abs(n[i]-n[i+1]);
        s=s+s1;
        }

        printf("%d\n",s);

    }

    return 0;
}
*/
#include<stdio.h>
int main()
{
   int size,a,b,d,e=0,f,i;
   scanf("%d",&size);
   while(size--)
   {
       scanf("%d%d",&a,&b);
       e+=b-a;
   }

   printf("%d\n",e);
   return 0;
}

















































/*#include<stdio.h>
int main()
{
    int t,t1[100],a,i,n[1222],count=0;
    scanf("%d",&t);
    /*while(t--)
    {
    scanf("%d",&a);
    }
    */
 /*   for(i=0;i<=t;i++)
    {
    scanf("%d",&t1[i]);
    }
    for(i=0;i<=t;i++)
    {
    printf("%d\n",t1[i]);
    n[34]=t1[i];
    if(strcmp(n,t1)==0)
    {
        count++;
    }
    printf("%d",count);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int i,ct=0,a=1;
    whille(s[ct]!=0)
    {
        ct++;
    }
    for(i=0;i<ct;i++)
    {
        if(s[i]==s[i+1])
        a++;
        else
        a=1;
        if(a==7)
            break;
    }
    printf(a==7?"YES:NO");
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,string[100],s1,t;
    scanf("%s",string);
    s1=strlen(string);
    //printf("%d",s1);
    //for(i=1;i<=s1;i++)
    //{
        t=string[100];
        if(t%4==0||t%7==0||t%47==0||t%74==0||t%477==0)
         {
             printf("YES\n");
         }
         else
         {
             printf("NO\n");
         }
    //}
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int t,string[234];
    while(scanf("%d",&t)!=EOF)
    {

    }

}
*/
/*#include<stdio.h>
int main()//w", "j", "m", "z", "b", "r"
{
    char s[101];
    int i;
    scanf("%s",s);
    i=strlen(s);
   // for(i=0;i<=100;i++)
   // {
        if(i%2!=0)
        {
            printf("CHAT WITH HER!\n");
        }
        else
        {
            printf("IGNORE HIM!\n");
        }
  //  }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",n+1);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n,s,sum=0,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        s=b-a;
        sum+=s;
    }
    printf("%d\n",sum);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int t,s[1000]={0},count,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]==s[i+1])
        {
            count=1;
            count++;
        }

    }
    printf("%d",count);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    float t1;
    float var2[10555];
    printf("address of var1 variable: %x\n",t1);
    printf("address of var2 variable: %x\n",var2);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int var=20;/*actual variable declaration*/
  /*  int *ip;
    ip=&var;
    //ip=&var;/*store address of var in pointer variable*/
    //printf("Adress of var variable: %x\n",&var);
    /*address stored in pointer variable*/
    //printf("Address stored in ip variable: %x\n",ip);
    /*access the value using pointer*/
    /*printf("Value of *ip variable:%d\n",*ip);
    return 0;
}
*/



















/*#include<stdio.h>
int main()
{
    int t,a,b,c=0,i;
    scanf("%d",&t);
    while(t--)
    {
scanf("%d%d",&a,&b);
c=c+(a*b);
    }
    printf("%d\n",c);
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
long long uva100(long long n)
{
    //printf("%lld ",n);
    if(n==1)
    {
    return 1;
    }
    else if(n&1)
    {
    return uva100(3*n+1)+1;
    }
    else
    {
    return uva100(n/2)+1;
    }
}
long long mxcycle(long long a,long long b)
{
   if(a>b)
   return mxcycle(b,a);
   long long mx=0,cycle;
    while(a<=b)
    {
       cycle=uva100(a);
       if(mx<cycle)
       {
       	mx=cycle;
	   }
       a++;

    }
    return mx;
}
int main()
{
      long long a,b;
      while(scanf("%lld%lld",&a,&b)!=EOF)
      {
      printf("%lld%lld%lld\n",a,b,mxcycle(a,b));
      }
      return 0;

}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
int t;
char s[1000]={"1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253"};
while(scanf("%d",&t)!=EOF)
{
printf("%c\n",s[t-1]);
}
return 0;
}
*/
/*#include<stdio.h>
int main()
{
  char t[1000],t1[123]={"0000000"},t2[100]={"1111111"};
  scanf("%s",t);
  if(strcmp(t,t1==0)||strcmp(t,t2)==0)
  {
      printf("YES\n");
  }
  else
    printf("NO\n");
  //if(t[100]=='0000000'||t[100]=='1111111')
       // printf("YES\n");
 // else
   // printf("NO\n");
   return 0;
}
*/



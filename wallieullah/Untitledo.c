#include<stdio.h>

int main()

{
 unsigned long int a,b,s,n;

    while(scanf("%lu%lu",&a,&b)!=EOF)

    {
         s=a-b,n=b-a;

        if(a>=b)

            printf("%lu\n",s);

        else

            printf("%lu\n",n);

    }

    return 0;

}



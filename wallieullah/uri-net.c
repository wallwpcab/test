#include <stdio.h>
int main()
{
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,money;
scanf("%d",&money);
while(money!=0)
           {
           if(money>=100)
           {
           money=money-100;
           a=a+1;
    	   }
           if(money<100&&money>=50)
           {
    		money=money-50;
    		b=b+1;
           }
           if(money<50&&money>=20)
           {
    		money=money-20;
    		c=c+1;
    	   }
           if(money<20&&money>=10)
           {
    		money=money-10;
    		d=d+1;
    	   }
           if(money<10&&money>=5)
           {
    		money=money-5;
    		e=e+1;
    	   }
           if(money<5&&money>=2)
           {
    		money=money-2;
    		f=f+1;
    	   }
           if(money<2&&money>=1)
           {
    		money=money-1;
    		g=g+1;
    	   }
           }
           printf("%d nota(s) de R$ 100\n",a);
           printf("%d nota(s) de R$ 50\n",b);
           printf("%d nota(s) de R$ 20\n",c);
           printf("%d nota(s) de R$ 10\n",d);
           printf("%d nota(s) de R$ 5\n",e);
           printf("%d nota(s) de R$ 2\n",f);
           printf("%d nota(s) de R$ 1\n",g);
           return 0;
           }

/*#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,sim;
    int t,i=0;
    scanf("%d",&t);
    //while(t--)
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        sim=abs(a-b);
        printf("Case %d: %lld\n",i,sim-1);
    }

    return 0;
}
*/
#include<stdio.h>
int main()
{
    long long  ind=0,len,N,arr1[100],arr2[100],ans;
    int t,n,i;
    scanf("%d",&t);
   // while(t--)
   for(n=1;n<=t;n++)
    {

    scanf("%lld%lld",&len,&N);
    for(i=0;i<len;i++)
    {
        arr1[i]=i; //assign index numbers to an array
    }

    for(i=len-1;i>=0;i--)
    {
        arr2[ind++]=arr1[i]; //reversely copy the index numbers into another array
    }
    for(i=0;i<len;i++)
    {
        if(arr2[i]==N)
        {
            ans=i;
            break;
        }
    }
    printf("Case %d: %lld\n",n,ans);
}
    return 0;
}











































/*#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,sim,i=0;
    scanf("%d",&t);
    //while(t--)
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        sim=abs(a-b);
        printf("Case %d: %d\n",i,sim-1);
    }

    return 0;
}
*/

































/*#include<stdio.h>
int main()
{
	 int main()
{
    int ind = 0,i;
    int len = 13;
    int N = 9;
    int arr1[100], arr2[100], ans;
    int t;
   // scanf("%d",&t);
   // while(t--)
   // {
    for(i = 0; i < len; i++)
    {
        arr1[i] = i;
    }

    for(i = len-1; i>=0; i--)
    {
        arr2[ind++] = arr1[i];
    }

    for(i = 0; i < len; i++)
    {
        if(arr2[i]==N)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
	}

    return 0;
}
*/
//}
/*#include<stdio.h>
int main()
{
	printf("Budget of each portion is 174551 BDT.");
	return 0;
}
*/











































/*#include<stdio.h>
#include<string.h>
int main()
{
int j,s,count=0;
char string[100];
scanf("%s",string);
s=strlen(string);
for(j=0;j<=s;j++)
{
if(string[j]=='H'||string[j]=='Q'||string[j]=='9')
{
count=1;
break;
}
}
if(count==1)
printf("YES\n");
else
printf("NO\n");
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    char animals[4][5];
    int i,j,count=0;
    //freopen("new.txt","r",stdin);
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%c",&animals[i][j]);
        }
        getchar();
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(animals[i][j]=='*')
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;

}
*/
/*
searching for saddle point
problem description:write a program to search for the saddle points
* In s 5 by 5 array of integers.A saddle point is a cell
whose value is greated than or equal to any in its row,
and less than or equal to any in its column.There maybe more
than one saddle point in the array.print out the co-ordinates
of any saddle points your program finds.
Print out "No saddle points" if there are none.
//saddle point x co-ordinate value is greater than or
equal to its row.
//sadle point y co-ordinate value is less than or equal
to its column.
/*
sample input:
12 30 51 17 37
41 37 60 14 31
10 11 12 13 14
21 44 64 45 78
38 55 32 89 21
sample output:


*/
/*
#include<stdio.h>
int main()
{
    int container[5][5];
    int val,i,j,flag;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&container[i][j]);
        }
    }
    //searching for saddle point
    flag=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            val=container[i][j];
            if(val>=(i+1)&&val<=(j+1))
            {
                flag=1;
                printf("%d%d\n",i+1,j+1);
            }
        }
    }
    if(!flag)
    {
        printf("No saddle points\n");
    }
    return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t=0,n=0;
    printf("Enter the no. of total walls:");
    scanf("%d",&n);
    printf("Enter the no. of test case:");
    scanf("%d",&t);
    int k,a=0,b=0;
    for(k=0;k<10;k++)
    {

    }
}
*/
/*#include<stdio.h>
#include<stdlib.h>
struct bdale
{
    char name[20];
    int day;
    int mounth;
    int year;
};
int main()
{
    struct bdale x[2000];
    int index=-1,yy=0,mm=0,dd=0,n,i;
    printf("Input the number of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",x[i].name,&x[i].name,&x[i].day,&x[i].mounth,&x[i].year);
    }
    for(i=0;i<n;i++)
    {
        if(x[i].year>yy)
        {
            yy=x[i].year;
            mm=x[i].mounth;
            dd=x[i].day;
            index=i;
        }
        else if(x[i].year==yy)
        {
            if(x[i].mounth>mm)
            {
                index=i;
                dd=x[i].day;
                mm=x[i].mounth;
            }
            else if(x[i].mounth==mm)
            {
                if(x[i].day>dd)
                {
                    index=i;
                    dd=x[i].day;
                }
            }
        }
    }
    printf("%s",x[index].name);
    return 0;
}





























/*#include<stdio.h>
int main()
{
    int t,s,x,s1,i,n,a[100];
    scanf("%d%d%d",&t,&s,&x);
    s1=t+s;
    //printf("%d",s1);
    for(i=s1;i<=100;i++)
   // printf("%d",a[i]);
   /* for(n=0;n<=i;n++)
    {
        printf("%d",n+1);
    }
    */
 /*   for(n=0;n<=i;n++)
   // {
  {
       if(x==a[i])
        printf("YES\n");
        return 0;
       if(x!=a[i])
        printf("NO\n");
       return 0;

   }

  //  }

    return 0;
}
*/
/*#include<conio.h>
int main()
{
  int arr[20];
  int i,size,sech;
  int t,s,x,s1,n,a[100];
  scanf("%d%d%d",&t,&s,&x);
  s1=t+s;
//  scanf("%d",&size);
 /* for(i=0; i<size; i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&sech);
  */
  /*for(i=0;i<1000;i++)
  {
   // if(sech==arr[i])
   // {
     // printf("Element exits in the list at position : %d",i+1);
     if(x==a[i])
        printf("YES\n");
        return 0;
       if(x!=a[i])
        printf("NO\n");
       return 0;
       //break;
   // }
  }
  //getch();
  return 0;
}
*/

























/*#include<stdio.h>
int main(void)
{
    int i,j,k,l,T,a,b;
    char str[10000],str2[10000];
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        gets(str);
        l=strlen(str);
        a=l/4;
        if(l%4!=0)
        {
            printf("INVALID\n");
        }
        else
        {
            for(j=0;j<a;j++)
            {
                for(k=j,b=j*4;k<l;k+=4,b++)
                {
                    str2[b]=str[k];
                }
            }
            puts(str2);
        }
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int ComputeMaxSufPos(string w)
{
    int i = 0, n = w.Length;
    for (int j = 1; j < n; ++j)
    {
        int c, k = 0;
        while ((c = w[(i + k) % n].CompareTo(w[(j + k) % n])) == 0 && k != n)
        { k++; }
        j += c > 0 ? k / (j - i) * (j - i) : k;
        i = c > 0 ? j : i;
    }
    return i;
}
int main()
{
    cout<<ComputeMaxSufPos();
{





















/*#include<iostream>
using namespace std;
int minLexCyc(const char *x) {
    int i = 0, j = 1, k = 1, p = 1, a, b, l = strlen(x);
    while(j+k <= (l<<1)) {
        if ((a=x[(i+k-1)%l])>(b=x[(j+k-1)%l])) {
            i=j++;
            k=p=1;
        } else if (a<b) {
            j+=k;
            k=1;
            p=j-i;
        } else if (a==b && k!=p) {
            k++;
        } else {
            j+=p;
            k=1;
        }
    }
    return i;
}
int main()
{
    cout<<minLexCyc();
    return 0;
}
*/































/*#include<iostream>
using namespace std;
int main()
{
    char * string_rotate_right( char *s )
//{
   size_t n = strlen( s );

   if ( n > 1 )
   {
      char c = s[n - 1];
      memmove( s + 1, s, n - 1 );
      *s = c;
   }

   return ( s );
//}


}
*/


























/*#include <iostream>

#include <string>

#include <cstring>



using namespace std;


int main()

{

    char myString[25]={"hello"};
    char firstChar;


    while(myString[0] != 'l')

    {

    for(int i = 0; i < 10; ++i)
    {

        firstChar = myString[0];

        myString[i] = myString[i+1];

        myString[strlen(myString)] = firstChar;

    }


    }
    cout << "\nNew word: " << myString << "\n\n";
    return 0;
//27
}
*/





















































/*#include <stdio.h>
#include <string.h>
void main()
{
 char str[123];//="abcdef";
 scanf("%s",str);
 int coun=0;
 int s;
 int n=strlen(str);
 int index=51,temp,i;
 while(index--)
  {
   temp=str[0];
   for(i=1;i<n;i++)
    {
     str[i-1]=str[i];

    }
    coun++;
   str[i-1]=temp;


  }
//coun++;
printf("%d",coun);
 //printf("%s",str);


}
*/
/*#include<iostream>
using namespace std;

string shiftString(string str,int n)
{
    char s[str.length()];
    int l=str.length();
    int i=0;
    int coun=0;
    s[l]='\0';

    for(i=n;i<l;i++)
    {
        s[i-n]=str[i];
    }

    for(int j=0;j<n;j++)
    {
        s[i-n]=str[j];
        i++;
    }
    coun++;
    return s;
}
int main()
{
    string str;//abcdef";
    int coun;
    cin>>str;
    cout<<shiftString(str,3);
    //cout<<coun;
    return 0;
}
*/























/*int mod(int a,int b)
{
    if(a<0)
    {
    a=-a;
    return b-(a%b);

    }

    else
    return a%b;

}

string shiftBACK(string text,int index)
{
  int i,sz=text.size();
  string retv(text.begin(),text.end() );

  for(i=0;i<text.size();i++)
  retv[mod( (i-index),sz )]=text[i] ;

  return retv;


}

string shiftFRONT(string text,int index)
{
       int i,sz=text.size();
       string retv(sz,'0');

       for(i=0;i<text.size();i++)
       retv[(i+index)%sz ]=text[i];

       return retv;

       }
*/



































/*#include<iostream>
using namespace std;
class item
{
	int a,b,c,d;
	public:
	  //  int a,b;
		void getdata(int x,int y);
		void putdata();
		void operator-();
	//	void operator+();

};
void item::getdata(int x,int y)
{
	a=x;
	b=y;
	//c=x1;
	//d=y1;
}
void item::putdata()
{
  cout<<a<<"\n"<<b<<"\n";//<<c<<"\n"<<d<<"\n";
}
void item::operator-()
{
	a=-a;
	b=-b;
}
/*void item::operator+()
{
	c=+c;
	d=+d;
}
*/
/*void operator -(item &ob)
{
	ob.a=-ob.a;
	ob.b=-ob.b;
}
/*void operator +(item &o)
{
	o.c=+o.c;
	o.d=+o.d;
}
*/
/*int main()
{
	item ob,o;
	ob.getdata(10,-20);
	ob.putdata();
	-ob;
	ob.putdata();
	//o.getdata(11,+23);
	//o.putdata();
	//+o;
	return 0;
}
*/


























































/*#include <stdio.h>
struct student
{
char name[50];
int id;
float grade;
};
void find_name(struct student directory[5])
{
scanf("%s",directory.name);
scanf("%d",&directory.id);
scanf("%f",&directory.grade);
printf("%s",directory.name);
printf("%d",directory.id);
printf("%f",directory.grade);
}
int main ()
{
int i;
struct student directory;
struct student directory[5]={ {"Shakib",12,4.0}, {"Riyad",19,2.0}, {"Niloy",22,4.0},{"Mashrafe",37,3.23},{"Tamim",72,3.75}};
int i_max = get_id_of_max_grade(directory, 5);
printf("Maximum Grade: %.2f, Student ID: %d, Name: %s\n\n", directory[i_max].grade, directory[i_max].id, directory[i_max].name );
return 0;
}
*/













/*#include<stdio.h>
int main()
{
    long long  ind=0,len,N,arr1[100000],arr2[100000],ans,i,n;
    long long int t;
    scanf("%lld",&t);
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
    printf("Case %lld: %lld\n",n,ans);
}
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%c",&str);
        printf("%d",str);
        strrev(str);
        printf("%d",str);

    }
    return 0;
}
*/








































/*    #include<stdio.h>
    #include<math.h>
    int main()
    {
        int t,len,wid,rad;
        float pi,round_area,rec_area;
        scanf("%d",&t);
        while(t--)
        {
           scanf("%d",&len);
           wid=len*(6/(float)10.0);
           rad=len*(2/(float)10.0);
           pi=acos(-1);
           round_area=pi*(rad*rad);
           rec_area=(len*wid)-round_area;
           printf("%.2f\n%.2f\n",round_area,rec_area);

           //t--;
        }
        return 0;
    }



























/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,k,ans=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i;j++)
        {
            if((a[j]==a[i])||(b[j]==a[i])||(a[j]==b[i])||(b[i]==b[j]))
            {
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,count=0,j,n,root=0;
    scanf("%d",&num);
   // while(scanf("%d",&num)!=EOF)
    //{
        //for(j=1;j<=num;j++)
        while(num--)
        {
            scanf("%d",&n);
            if(n==0||n==1)
            {
                printf("Not Prime\n");
            }
            else
            {
                count=1;
                root=sqrt(n);
                for(i=2;i<=root;i++)
                {
                    if(n%i==0)
                    {
                        count=0;
                        break;
                    }
                }
                if(count==1)
                {
                    printf("Prime\n");
                }
                else
                    printf("Not Prime\n");
            }
        }
   // }
    return 0;
}
/*#include<stdio.h>
int main()
{
int m,n;
while(scanf("%d%d",&n,&m)!=EOF)
{
int i,fact=1,j,fac=1,sum;
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
fact=1;
fac=1;
}
return 0;
}
*/
/*#include<stdio.h>
int avg()
{
    int a,s=0,i;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a);
        a/=2;
    }
    printf("%d",a);
    //return 0;
}
int main()
{
    printf("%d",avg());
    return 0;
}*/
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string str;
	vector<int>digit;
	while(cin>>str)
	{
		digit.clear();
		for(int i=0;i<str.size();i++)
		{
			if(str[i]!='+')
				digit>push_back(str[i]-48);
		}
		sort(digit.begin(),digit.end());
		for(int i=0;i<digit.size()-1;++i)
		{
			cout<<digit[i]<<'+';
		}
		cout<<digit[digit.size()-1]<<'\n';
	}
	return 0;
}
*/
















































/*#include<stdio.h>
int f(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if(n%2!=0)
    {
    n=3*n+1;
    return n;
    }
    else
    {
    n=n/2;
    return n;
    }


}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}*/
/*#include<stdio.h>
long long uva100(long long n)
{

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
      printf("%lld %lld %lld\n",a,b,mxcycle(a,b));
      }
      return 0;

}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    long long  n;
    while(scanf("%lld",&n)>=0)
    {
        if(n<0)
        break;
        else
        printf("%lld\n",n*(n+1)/2+1);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
int a[5],count=0,i,flag=0;
while(flag!=EOF)
{
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
count++;
}
}
printf("%d valores pares\n",count);
break;
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int t,sum=0,a,b,i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    if(i%2!=0)
    sum=sum+i;
    }
    printf("Case %d: %d\n",j,sum);
    sum=0;
    }
    return 0;
    }*/

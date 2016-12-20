#include<stdio.h>
int main()
{
int a,b,count=0,s=0,i;
while(scanf("%d%d",&a,&b)!=EOF)
{
if(a>b)
{
for(i=b;i<=a;i++)
{
if(i%13!=0)
{
s+=i;
}
}
printf("%d\n",s);
}
else
{
for(i=b;i<=a;i++)
{
if(i%13!=0)
{
s+=i;
}
}
printf("%d\n",s);
}
}
return 0;
/*#include <iostream>
#include <vector>
using namespace std;
vector<int> pick_vector_with_biggest_fifth_element
(
vector<int> left,
vector<int> right
)
{
if((left[5])<(right[5]))
{
return( right );
};
// else
return( left );
}
int vector_demo(void)
{
cout << "vector demo" << endl;
vector<int> left(7);
vector<int> right(7);
left[5] = 7;
right[5] = 8;
cout << left[5] << endl;
cout << right[5] << endl;
vector<int> biggest
(
pick_vector_with_biggest_fifth_element( left, right )
);
cout << biggest[5] << endl;
return 0;
}
int main(void)
{
vector_demo();
}*/

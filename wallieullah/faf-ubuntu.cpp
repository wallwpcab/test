/*#include <iostream>
#include<math.h>
using namespace std;
int myfunction()
{
int A,N,i,count=0,sum=0;
cin>>A>>N;
for(i=A;i<=pow(10,7);++i)
{
sum+=i;
++count;
if(N>0)
{
if(count==N)
{
cout<<sum<<endl;
break;
}
}
else if(N<=0)
{
cin>>N;
}
}
}
int main()
{
myfunction();
return 0;
}*/















#include<iostream>
using namespace std;
int bsearch(int b[],int l,int h,int item)
{
if(l<=h)
{
int mid=(l+h)/2;
if(b[mid]==item)
return(mid+1);
else if(b[mid]>item)
return bsearch(b,l,mid-1,item);
else
return bsearch(b,mid+1,h,item);
}
else
return -1;
}
main()
{
int s,loc,i,search;
cout<<"How many element in your search: "<<endl;
cin>>s;
int a[s];
cout<<"\nEnter your elements:";
for(i=0;i<s;i++)
{
cin>>a[i];
}
cout<<"\nEnter your search Item: "<<endl;
cin>>search;
loc=bsearch(a,0,s-1,search);
if(loc!=-1)
cout<<"\nYour search item %d is located at %d.\n"<<search<<loc<<endl;
else
cout<<"\nItem %d is not found.\n"<<search;
}























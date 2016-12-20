#include<stdio.h>
int main()
{
int F(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return F(n-1)+F(n-2);
}
}
#include<stdio.h>
int main()
{
int dp[20];
int F(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
if(dp[n]!=-1)
return dp[n];
else
{
dp[n]=F(n-1)+F(n-2);
return dp[n];
}
}
}
/*#include<stdio.h>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int fib(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;
return fib(n-1)+fib(n-2);
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",fib(n));
getchar();
return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n)
{
for(int i=0;i<n;i++)
{
int temp=arr[i];
while(temp>0)
{
int j=(i<n/2)? 2*i + 1 : 2*(n-1-i);
if(i==j)
{
arr[i]=-temp;
break;
}
swap(temp,arr[j]);
arr[j]=-arr[j];
i=j;
}
}
for(int i=0;i<n;i++)
arr[i]=-arr[i];
}
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Original Array\n";
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
rearrange(arr, n);
cout<<"\nModified Array\n";
for(int i=0;i<n;i++)
cout<<arr[i]<< " ";
return 0;
}


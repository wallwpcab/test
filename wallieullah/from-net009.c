#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
int main()
{
int num1=10,num2=5;
printf("%d%d\n",num1,num2);
swap(&num1,&num2);
printf("%d%d",num1,num2);
return 0;
}
void swap(int*p,int*q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}

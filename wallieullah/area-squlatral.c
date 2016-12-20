/*#include<stdio.h>
int main()
{
int a[10],count=0,c=0,i,flag=0;
while(flag!=EOF)
{
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
if(a[i]>0)
{
count++;
}
if(a[i]<0)
{
c++;
}
}
printf("%d positives\n%d negatives \n",count,c);
break;
}
return 0;
}*/
#include<stdio.h>
int main(void){
    int i,n,count=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0)
            count++;
    }
    printf("%d possitives\n",count);
    return 0;
}

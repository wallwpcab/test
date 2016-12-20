/*#include<stdio.h>
#include<math.h>
int main ()
{
int t,i;
long long fib[61];
fib[0]=0;
fib[1]=1;
int num;
for(i=2;i<=60;i++)
{
fib[i]=fib[i-1]+fib[i-2];
}
scanf("%d",&t);
while(t--)
{
scanf("%d",&num);
printf("Fib(%d) = %lld\n",num,fib[num]);
}
return 0;
}



























/*#include<stdio.h>
int main()
{
int c;
FILE *fp;
fp=fopen("Start.txt","w");
fscanf(stdin,"%d",c);
fprintf(fp,"%d",c);
fclose(fp);
fp=fopen("Start.txt","r");
fscanf(fp,"%d",&c);
fprintf(stdout,"%d",c);
fclose(fp);
}*/
/*#include<stdio.h>
int main()
{
int t,a,e,s1=0,i,s2,j;
scanf("%d",&t);
for(j=1;j<=t;j++)
{
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%d",&e);
if(e<0)
e=0;
s1+=e;
}
printf("Case %d: %d\n",j,s1);
s1=0;
}
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t%4==0 && t%400==0 && t%15!=0 && t%55!=0)
        {
          printf("This is leap year.\n");
        }
        if(t%15==0 && t%4!=0 && t%400!=0 && t%55!=0 )
        {
            printf("This is huluculu festival year.\n");
        }
        if(t%55==0 && t%15!=0 && t%4!=0 && t%400!=0)
        {
            printf("This is bulukulu festival year.\n");
        }
        if(t%4==0 && t%400==0 && t%15==0)
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
        }
        if(t%55==0 && t%4==0 && t%400==0)
        {
            printf("This is leap year.\n");
            printf("This is bulukulu festival year.\n");
        }
        if(t%55!=0 && t%4!=0 && t%400!=0 && t%15!=0)
        {
            printf("This is an ordinary year.\n");
        }

    }
    return 0;

}*/
/*#include<stdio.h>
#include<conio.h>
void main()
{
// clrscr();
int j,k,la[15]={0,32,51,27,85,66},i;
int n=5,item;
printf("Position K:");
scanf("%d",&k);
     printf("Item :");
     scanf("%d",&item);
     j=n;
     while(j>=k)
     {
         la[j+1]=la[j];
         j=j-1;

     }
     la[k]=item;
     n=n+1;
     for(i=1;i<=n;i++)
     {
         printf("%d",la[i]);
         //getch();
     }
     return 0;
 }
 /*#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<conio.h>
 #include<dos.h>
 struct node
 {
     int info;
     node *link;
 };
 node *start=0;
 void create(node *prt,int n)
 {
     if(n==1)
     {
         scanf("%d",&ptr->info);
         ptr->link=0;
     }
     else
        {
            scanf("%d",&ptr->info);
            ptr->link=(node *)malloc(sizeof(node));
            create(ptr->link,n-1);
        }
 }
 void traverse(node *start)
 {
     node *ptr;
     ptr=start;
     while(ptr!=0)
     {
         cprintf("")
     }
 }*/
 /*#include<stdio.h>
 #include<conio.h>
 void main()
 {
     //clrscr();
     int k,la[11]={0,32,51,27,85,66,27,85,66,23,13,57};
     int n=8,lb=1,ub=8;
     k=lb;
     while(k<=ub)
     {
         printf("%d\n",la[k]);
         k=k+1;
     }
     return 0;
     getch();
 }*/
/*#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int j,k,la[15]={0,32,51,27,85,66},n=5,item,i;
    printf("Position K:");
    scanf("%d",&k);
    item=la[k];
    for(j=k;j<=n-1;j++)
    {
        la[j]=la[j+1];
        n=n-1;
    }
    for(i=1;i<n;i++)
    {
        printf("%d",la[i]);
        //getch();
    }
    return 0;
}*/

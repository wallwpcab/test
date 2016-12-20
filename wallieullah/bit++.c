#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("Factors of %d are: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            count++;
        }
        printf("%d\n",count-1);
        return 0;
    }
}



























/*#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int string[10],i,j;
for(i=0;i<10;i++)
{
scanf("%s",string);
}
for(j=0;j<1;j++)
{
scanf("%c",&string[10]);
if(string[j]=='H' || string[j]=='Q' ||string[j]=='9' || string[j]=='+')
{
printf("YES");
}
else
{
printf("NO");
}
}
return 0;
}*/
/*#include <stdio.h>
int main()
{
int n,i,count=0;
printf("Enter a positive integer: ");
scanf("%d",&n);
printf("Factors of %d are: ", n);
for(i=1;i<=n;++i)
{
if(n%i==0)
printf("%d\n",i);
count++;
}
printf("%d\n",count-1);
return 0;
}
*/

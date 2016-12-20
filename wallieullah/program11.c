#include<stdio.h>
int main()
{
    int search,c,i,loc,pos,n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integers value one after another:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("Enter the number to search:");
    scanf("%d",&search);
     for(i=0;i<n;i++)
     {
         loc=array[i];
         pos=i+1;
         break;
     }

 if(loc==search)
 {
     printf("%d is present at location %d.\n",loc,pos);
 }
 return 0;
}

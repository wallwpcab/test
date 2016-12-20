#include<stdio.h>
int main()
{
    int search,c,i,loc,pos,n;
    printf("Enter the  number of elements is array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integers value one after another:",n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[i]);

    }
       printf("Enter the number to search:");
       scanf("%d",&search);
       for(i=0;i<n;i++)
       {
           if(array[i]==search)
            loc=array[i];
            pos=i+1;
            break;

       }
       if(loc==search)
        {
             printf("%d is present at location %d\n",loc,pos);
        }
        else
        {
             printf("%d is not present in array \n",search);
        }
        return 0;

}

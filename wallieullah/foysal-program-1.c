#include<stdio.h>

int REC_BS(int data[],int l,int h,int item)
{
    int m;

    if(l<=h)
    {
        m=(l+h)/2;
        if(item==data[m])
            return m+1;
        else if(item<data[m])
        {
            return REC_BS(data,l,m-1,item);
        }
        else

        {
            return REC_BS(data,m+1,h,item);

        }
    }
    else
    {
        return -1;
    }

}
int main()
{
    int s,i,loc;
    scanf("%d",&s);
    int array[s],search;

    for(i=0;i<s;i++)
    {
        scanf("%d",&array[i]);
    }
     printf("enter your search item");
    scanf("%d",&search);

    loc=REC_BS(array,0,s-1,search);
    if(loc==-1)
    {
        printf("item not found");
    }
    else
        {
            printf(" the  search item location is %d ",loc);
        }
}

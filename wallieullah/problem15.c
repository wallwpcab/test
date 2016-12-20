#include<stdio.h>
int main()
{
    int i,loc=-1;
    int value[5],item;
    int *p=value;
    printf("Enter 5 values one after another one:");
    while(p<value+5)
    {
        scanf("%d",p);
        p++;
    }
    printf("Enter Search item:");
    scanf("%d",&item);
    p=value;
  while(p<value+5)
  {
      if(item =*p)
      {
          loc=1;
          printf("Item %d found at %x",item,p);
          break;
      }
      p++;
      if(loc==-1)
        printf("Item %d not found",item);
  }
}

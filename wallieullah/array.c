#include <stdio.h>
int max_array(int a[], int num_elements);
void print_array(int a[], int num_elements);
void main(void)
{
int a[10] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
int max;

printf("\nArray:\n");
print_array(a, 10);
max = max_array(a, 10);
printf("The max is %d\n", max);
}
int max_array(int a[], int num_elements)
{
int i, max=-32000;
for (i=0; i<num_elements; i++)
{
if (a[i]>max)
{
max=a[i];
}
}
return(max);
}

void print_array(int a[], int num_elements)
{
int i;
for(i=0; i<num_elements; i++)
{
printf("%d ", a[i]);
}
printf("\n");
}

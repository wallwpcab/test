#include <stdio.h>

void bubble_sort(long [], char n);

int main()
{
    long array[100], n, c;

    printf("Enter number of elements\n");
    scanf("%ld", &n);

    printf("Enter %ld integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%ld", &array[c]);

    printf("Enter sort order\n");
    fflush(stdin);
    printf("Please enter A for ascending or D for descending order\n");
    scanf("%ld", &n);
    bubble_sort(array, n);
    printf("Sorted list in descending order:\n");
    for ( c = 0 ; c < n ; c++ )
    {
        printf("%ld\n", array[c]);
    }
    fflush(stdin);
    getchar();
    return 0;
}

void bubble_sort(long list[], char n)
{
    long c, d, temp;

    if(n=='a' || n=='A')
    {
        for (c = 0 ; c < ( n - 1 ); c++)
        {
            for (d = 0 ; d < n - c - 1; d++)
            {
                if (list[d] > list[d+1])
                {
                    temp = list[d];
                    list[d] = list[d+1];
                    list[d+1] = temp;
                }
            }
        }
    }
    if(n=='d' || n=='D')
    {
        long c, d, temp;

        for (c = 0 ; c < ( n - 1 ); c++)
        {
            for (d = 0 ; d > n - c - 1; d++)
            {
                if (list[d] < list[d+1])
                {/* Swapping */
                    temp = list[d];
                    list[d] = list[d+1];
                    list[d+1] = temp;
                }
            }
        }
    }
}


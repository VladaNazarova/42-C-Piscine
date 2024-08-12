#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int     start;
        int     end;
        int     temp;

        start = 0;
        end = size - 1;
        while (start < end)
        {
                temp = tab[start];
                tab[start] = tab[end];
                tab[end] = temp;

                start++;
                end--;
        }
}

void    printArray(int arr[], int size)
{
        int     i;
        for (i = 0; i < size; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");
}

int     main(void)
{
        int     nums[] = {1, 2, 3, 4, 5};
        printArray(nums, 5);
        ft_rev_int_tab(nums, 5);
        printArray(nums, 5);
}

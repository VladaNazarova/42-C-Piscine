#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
        int     i;
        int     j;

        i = 0;
        while (i < size - 1)
        {
                j = 0;
                while (j < size - i - 1)
                {
                        if (tab[j] > tab[j + 1])
                        {
                                int     temp;

                                temp = tab[j];
                                tab[j] = tab[j + 1];
                                tab[j + 1] = temp;
                        }
                        j++;
                }
                i++;
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
        int     nums[] = {614, 24, 63, 4, 21};
        printArray(nums, 5);
        ft_sort_int_tab(nums, 5);
        printArray(nums, 5);
}

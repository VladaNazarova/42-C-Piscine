#include <stdio.h>

void    ft_swap(int *a, int *b)
{
        int     temp;

        temp = *a;
        *a = *b;
        *b = temp;
        printf("after: a: %d, b: %d\n", *a, *b);
}

int     main(void)
{
        int     a;
        int     b;

        a = 1;
        b = 2;
        printf("before: a: %d, b: %d\n", a, b);
        ft_swap(&a, &b);
}

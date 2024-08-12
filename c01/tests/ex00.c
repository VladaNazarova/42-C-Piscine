#include <stdio.h>

void    ft_ft(int *nbr)
{
        *nbr = 42;
        printf("after: %d\n", *nbr);
}

int     main(void)
{
        int     n;
        n = 21;
        printf("before: %d\n", n);
        ft_ft(&n);
}

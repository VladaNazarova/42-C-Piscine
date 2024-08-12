#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
        int     d;
        int     m;

        d = *a / *b;
        m = *a % *b;
        *a = d;
        *b = m;
        printf("after: a(result of division): %d, b(remainder): %d\n", *a, *b);
}

int     main(void)
{
        int     a;
        int     b;

        a = 10;
        b = 5;
        printf("before: a: %d, b: %d\n", a, b);
        ft_ultimate_div_mod(&a, &b);
}

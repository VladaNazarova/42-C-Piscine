#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
        printf("div: %d, mod: %d\n", *div, *mod);
}

int     main(void)
{
        int     a;
        int     b;
        int     div;
        int     mod;

        a = 10;
        b = 3;
        div = 0;
        mod = 0;
        printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
        ft_div_mod(a, b, &div, &mod);
}

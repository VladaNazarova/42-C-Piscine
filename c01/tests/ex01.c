#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
        *********nbr = 42;
        printf("after: %d\n", *********nbr);
}

int     main(void)
{
        int     n;
        int     *p1;
        int     **p2;
        int     ***p3;
        int     ****p4;
        int     *****p5;
        int     ******p6;
        int     *******p7;
        int     ********p8;
        int     *********p9;

        n = 21;
        p1 = &n;
        p2 = &p1;
        p3 = &p2;
        p4 = &p3;
        p5 = &p4;
        p6 = &p5;
        p7 = &p6;
        p8 = &p7;
        p9 = &p8;
        printf("before: %d\n", n);
        ft_ultimate_ft(p9);
}

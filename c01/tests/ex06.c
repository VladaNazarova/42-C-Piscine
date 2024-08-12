#include <stdio.h>

int     ft_strlen(char *str)
{
        int     length;

        length = 0;
        while (*str)
        {
                length++;
                str++;
        }
        printf("Length: %d\n", length);
        return (length);
}

int     main(void)
{
        ft_strlen("Vlada");
}

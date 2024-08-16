#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (str[i] >= 32 && str[i] <= 126)
                        i++;
                else
                        return (0);
        }
        return (1);
}

int     main(void)
{
        printf("%d\n", ft_str_is_printable("\t"));
        printf("%d\n", ft_str_is_printable("wrofh3e83^$&#q948"));
}

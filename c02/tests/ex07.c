#include <stdio.h>

char    *ft_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (str[i] >= 'a'&& str[i] <= 'z')
                        str[i] -= 32;
                i++;
        }
        return (str);
}

int     main(void)
{
        char str[] = "hello WORLD\n";
        printf("%s", ft_uppercase(str));
}

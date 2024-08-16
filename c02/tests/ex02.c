#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
                        i++;
                else
                        return (0);
        }
        return (1);
}

int     main(void)
{
        printf("%d\n", ft_str_is_alpha("Vlada"));
        printf("%d\n", ft_str_is_alpha("Vlada42"));
	printf("%d\n", ft_str_is_alpha(""));
}

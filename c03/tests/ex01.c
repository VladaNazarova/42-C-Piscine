#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        if (!(s1 && s2))
        {
                if (!s1 && !s2)
                        return (0);
                else if (!s1)
                        return (1);
                else
                        return (-1);
        }
        while (*s1 && *s1 == *s2 && n > 0)
        {
                s1++;
                s2++;
                n--;
        }
        return (*s1 - *s2);
}

int     main(void)
{
        printf("ABC, ABX (n = 1): %d\n", ft_strncmp("ABC", "ABX", 1));
        printf("ABC, ABX (n = 3): %d\n", ft_strncmp("ABC", "ABX", 3));
        printf("ABX, ABC (n = 3): %d\n", ft_strncmp("ABX", "ABC", 3));
        printf("null, null (n = 1): %d\n", ft_strncmp(NULL, NULL, 1));
        printf("N, null (n = 1): %d\n", ft_strncmp("N", NULL, 1));
        printf("null, N (n = 1): %d\n", ft_strncmp(NULL, "N", 1));
}

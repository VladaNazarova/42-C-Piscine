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
        return (length);
}

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     dest_len;

        dest_len = ft_strlen(dest);
        i = 0;
        while (src[i])
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest);
}

int     main(void)
{
        char    src[50] = "Hello ";
        printf("Hello + World: %s", ft_strcat(src, "World!\n"));
}

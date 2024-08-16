#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
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
        while (*s1 && *s1 == *s2)
        {
                s1++;
                s2++;
        }
        return  (*s1 - *s2);
}

int     main(void)
{
        printf("ABC vs ABC: %d\n", ft_strcmp("ABC", "ABC"));
	printf("AC vs ABC: %d\n", ft_strcmp("AC", "ABC"));
	printf("AB vs ABC: %d\n", ft_strcmp("AB", "ABC"));
	printf("YWDC vs WPIZ: %d\n", ft_strcmp("YWDC", "WPIZ"));
	printf("null vs null: %d\n", ft_strcmp(NULL, NULL));
        printf("N vs null: %d\n", ft_strcmp("N", NULL));
        printf("null vs N: %d\n", ft_strcmp(NULL, "N"));
}

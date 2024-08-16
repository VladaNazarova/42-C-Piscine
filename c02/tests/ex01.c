#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        size_t	i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
/*	while (i < n)
	{
		dest[i] = '\0';
		i++;
	} */
	return dest;
}

int	main(void)
{
	char	dest[50] = "hey";
	char	src[] = "Hello World!\n";

	printf("%s", ft_strncpy(dest, src, 50));
	printf("%s", ft_strncpy(dest, src, 13));
}

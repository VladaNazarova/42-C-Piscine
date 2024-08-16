#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "Hello ";
	printf("%s", ft_strncat(dest, "World!\n", 2));
}

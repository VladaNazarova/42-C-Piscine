/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:14:13 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/22 15:09:22 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*dest;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!ptr)
		return (NULL);
	dest = ptr;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s = "School 42";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
}
*/

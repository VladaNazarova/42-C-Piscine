/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:56:30 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/20 12:52:28 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*subs;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		subs = to_find;
		while (*str && *subs && *str == *subs)
		{
			str++;
			subs++;
		}
		if (!*subs)
			return (s);
		str = s + 1;
	}
	return (NULL);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("%s\n", ft_strstr("ABBA", "BB"));
        printf("%s\n", ft_strstr("ABBA", "BA"));
        printf("%s\n", ft_strstr("lalal4562lalsl", "56"));
        printf("%s\n", ft_strstr("ABBA", "FR"));
}
*/

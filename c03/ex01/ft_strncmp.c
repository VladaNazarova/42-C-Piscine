/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:44:02 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/21 13:38:06 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("ABC, ABX (n = 1): %d\n", ft_strncmp("ABC", "ABX", 1));
	printf("ABC, ABX (n = 3): %d\n", ft_strncmp("ABC", "ABX", 3));
	printf("ABX, ABC (n = 3): %d\n", ft_strncmp("ABX", "ABC", 3));
	printf("a, ab (n = 1): %d\n", ft_strncmp("a", "ab", 1));
	printf("ab, a (n = 1): %d\n", ft_strncmp("ab", "a", 1));
	printf("a, b, (n = 0): %d\n", ft_strncmp("a", "b", 0));
}
*/

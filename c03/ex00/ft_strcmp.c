/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:14:59 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/20 14:02:22 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("ABC, ABC: %d\n", ft_strcmp("ABC", "ABC"));
	printf("AC, ABC: %d\n", ft_strcmp("AC", "ABC"));
	printf("AB, ABC: %d\n", ft_strcmp("AB", "ABC"));
	printf("YWDT, WPIZ: %d\n", ft_strcmp("YWDC", "WPIZ"));
	printf("empty, ABC: %d\n", ft_strcmp("", "ABC"));
	printf("empty, empty: %d\n", ft_strcmp("", ""));
	printf("abc, abcd: %d\n", ft_strcmp("abc", "abcd"));
}
*/

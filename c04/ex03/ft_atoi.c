/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:09:01 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/21 20:25:51 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == ' '
		|| *str == '\f'
		|| *str == '\n'
		|| *str == '\r'
		|| *str == '\t'
		|| *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("32"));
	printf("%d\n", ft_atoi("-42301"));
	printf("%d\n", ft_atoi(" "));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("\n\t\r\v     --23141"));
	printf("%d\n", ft_atoi("   ---++4234134"));
	printf("%d\n", ft_atoi("   ---++4234qeq134"));
}
*/

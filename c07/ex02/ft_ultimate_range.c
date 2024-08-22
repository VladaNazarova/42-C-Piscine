/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:47:32 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/22 16:10:47 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_arr_len(int *arr)
{
	int	len;

	len = 0;
	while (*arr)
	{
		len++;
		arr++;
	}
	return (len);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;

	if (min >= max)
		return (0);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (-1);
	*range = ptr;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (ft_arr_len(*range));
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;

	printf("%d", ft_ultimate_range(&range, 1, 10));
}
*/

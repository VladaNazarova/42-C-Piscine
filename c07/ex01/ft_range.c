/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:10:33 by vnazarov          #+#    #+#             */
/*   Updated: 2024/08/22 15:47:02 by vnazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*arr;

	if (min >= max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (NULL);
	arr = ptr;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*arr;

	arr = ft_range(1, 10);
	i = 0;
	while (i < (10 - 1))
	{
		printf("%d ", arr[i]);
		i++;
	}
}
*/

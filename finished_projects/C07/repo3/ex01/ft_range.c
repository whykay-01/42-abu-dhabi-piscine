/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:08:25 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/06 14:08:52 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>	

void	fill_array(int *dest, int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return ((void *)0);
	i = max - min;
	array = malloc(i * sizeof(int));
	if (!array)
		return (0);
	fill_array(array, min, max);
	return (array);
}

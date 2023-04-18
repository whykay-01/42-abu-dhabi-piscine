/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:05:50 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/06 15:05:52 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc((max - min + 1) * sizeof(int));
	if (min >= max)
	{
		array = malloc(sizeof(int) * 1);
		array[0] = '\0';
		return (0);
	}
	if (array == ((void *)0))
		return (-1);
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}

// int main(void)
// {
// 	int i;

// 	i = 0;
// 	int *range[10];

// 	printf("%d", ft_ultimate_range(range, 15, 12));
// }

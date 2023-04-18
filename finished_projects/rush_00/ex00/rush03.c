/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhaj-h <mahmoudax3@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:19:46 by malhaj-h          #+#    #+#             */
/*   Updated: 2022/05/22 20:21:56 by malhaj-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	v = 1;
	if (x < 1 || y < 1)
		return ;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (h == 1 && v == y))
				ft_putchar('A');
			else if ((h == x && v == 1) || (h == x && v == y))
				ft_putchar('C');
			else if ((1 < h && h < x) && (1 < v && v < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}

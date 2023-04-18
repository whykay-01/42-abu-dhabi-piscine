/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhaj-h <mahmoudax3@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:22:49 by malhaj-h          #+#    #+#             */
/*   Updated: 2022/05/22 20:25:52 by malhaj-h         ###   ########.fr       */
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
			if ((h == 1 && v == 1) || (h == x && v == y && x != 1 && y != 1))
				ft_putchar('A');
			else if ((h == 1 && v == y) || (h == x && v == 1))
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

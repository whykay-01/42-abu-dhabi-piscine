/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:43:01 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/21 21:59:45 by fasharif         ###   ########.fr       */
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
				ft_putchar('/');
			else if ((h == x && v == 1) || (h == 1 && v == y))
				ft_putchar('\\');
			else if ((1 < h && h < x) && (1 < v && v < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}

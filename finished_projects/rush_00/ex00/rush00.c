/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:47:18 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/21 19:01:12 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hori;
	int	verti;

	hori = 1;
	verti = 1;
	if (x < 1 || y < 1)
		return ;
	while (verti <= y)
	{
		hori = 1;
		while (hori <= x)
		{
			if ((verti == 1 || verti == y) && (hori > 1 && hori < x))
				ft_putchar('-');
			else if (verti > 1 && verti < y && (hori == 1 || hori == x))
				ft_putchar('|');
			else if ((1 < hori && hori < x) && (1 < verti && verti < y))
				ft_putchar(' ');
			else
				ft_putchar('o');
			hori++;
		}
		ft_putchar('\n');
		verti++;
	}
}

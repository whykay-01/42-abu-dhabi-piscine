/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:10:03 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/20 16:02:47 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_and_comma(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	if (c == '7' && d == '8' && e == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	e;

	c = '/';
	while (c < '9')
	{	
		d = c + 1;
		c++;
		while (d < '9')
		{	
			e = d + 1;
			d++;
			while (e < '9')
			{		
				e++;
				display_and_comma(c, d, e);
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }

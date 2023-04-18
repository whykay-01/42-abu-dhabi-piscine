/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:44:47 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/26 12:58:13 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_min_max(void)
{
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	recursion(int nb)
{	
	if (nb > 9)
	{
		recursion(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		print_min_max();
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		if (nb > 9)
		{
			recursion(nb);
		}
	}	
}

// int	main(void)
// {
// 	ft_putnbr(42);
// }

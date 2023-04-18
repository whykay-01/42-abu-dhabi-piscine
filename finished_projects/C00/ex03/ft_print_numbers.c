/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:31:54 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/19 21:42:06 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '/';
	while (c < '9')
	{
		c++;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:17:28 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/19 21:30:05 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = '{';
	while (c > 'a')
	{
		--c;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
//	ft_print_reverse_alphabet();
// }

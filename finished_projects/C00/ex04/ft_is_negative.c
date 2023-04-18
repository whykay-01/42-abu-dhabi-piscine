/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:52:09 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/20 13:12:06 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// }

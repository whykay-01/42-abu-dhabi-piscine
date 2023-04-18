/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:51:07 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/03 13:51:09 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(6));
// 	printf("%d\n", ft_is_prime(5));
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(99991));
// 	printf("%d\n", ft_is_prime(35));
// 	printf("%d\n", ft_is_prime(1));
// 	printf("%d\n", ft_is_prime(0));
// }

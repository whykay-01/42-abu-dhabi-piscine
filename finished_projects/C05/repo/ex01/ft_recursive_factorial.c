/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:46:04 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/02 17:46:06 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(18));
// }

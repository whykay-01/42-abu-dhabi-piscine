/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:49:54 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/02 18:49:56 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-4));
// }

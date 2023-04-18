/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:18:14 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/26 13:18:18 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x_temp;

	if (*b != 0)
	{
		x_temp = *a;
		*a = *a / *b;
		*b = x_temp % *b;
	}
	else
	{
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// }

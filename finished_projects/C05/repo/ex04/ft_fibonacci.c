/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:50:29 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/03 13:50:31 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else if (index == 3)
		return (2);
	else if (index == 4)
		return (3);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int main(void)
{
	printf("%d\n", ft_fibonacci(3));
}
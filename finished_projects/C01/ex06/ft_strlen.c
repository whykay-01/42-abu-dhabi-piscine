/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:48:49 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/26 15:48:52 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

// int	main(void)
// {
// 	char str[] = "Hello\n";
// 	ft_strlen(str);
// 	printf("the number of charachters is: %d", ft_strlen(str));
// }

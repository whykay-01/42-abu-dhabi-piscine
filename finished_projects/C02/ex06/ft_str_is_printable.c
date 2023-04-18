/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:55:34 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/28 17:55:36 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
			return (0);
		else
			i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	str = "Hellojdakdjka\nsj";
// 	printf("%d\n", ft_str_is_alpha(str));
// }
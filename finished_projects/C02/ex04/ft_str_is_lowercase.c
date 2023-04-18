/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:50:24 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/28 17:50:25 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	str = "ellojdakdAkasj";
// 	printf("%d\n", ft_str_is_lowercase(str));
// }

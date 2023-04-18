/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:41:52 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/01 13:41:54 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*x;
	char	*y;

	y = to_find;
	if (*y == '\0')
		return (str);
	while (*str)
	{
		if (*str == *y)
		{
			x = str;
			while (*x == *y || *y == '\0')
			{
				if (*y == '\0')
					return (str);
				x++;
				y++;
			}
			y = to_find;
		}
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char c[] = "hello Try to find mee";
// 	char b[] = "to";
// 	printf("%s\n", ft_strstr(c, b));
// }

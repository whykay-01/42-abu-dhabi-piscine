/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:05:27 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/05 10:41:20 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		length;
	int		i;

	i = 0;
	length = len(src);
	new = malloc(sizeof(char) * (length));
	if (length == 0)
	{
		new[0] = '\0';
		return (new);
	}
	while (i < length)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("hello"));
// }

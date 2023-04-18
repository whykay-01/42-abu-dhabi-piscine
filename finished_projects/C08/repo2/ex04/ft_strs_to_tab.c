/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:19:46 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/05 15:19:48 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>


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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_str		*ret;

	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		ret[i].size = j;
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
	}
	ret[i].str = 0;
	return (ret);
}

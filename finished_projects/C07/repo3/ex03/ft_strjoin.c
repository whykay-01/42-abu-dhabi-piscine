/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:23:25 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/06 17:23:27 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += len(strs[i]);
		i++;
	}
	total_length += (len(sep) * (size - 1));
	return (total_length);
}

void	fill_array(char *res, int size, char **strs, char *sep)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (*strs[i] != '\0')
		{
			res[index++] = *strs[i];
			strs[i]++;
		}
		i++;
		if (i == size)
			break ;
		j = 0;
		while (sep[j] != '\0')
			res[index++] = sep[j++];
	}
	res[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_length;
	char	*res;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	t_length = length(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (t_length + 1));
	if (!res)
		return (0);
	fill_array(res, size, strs, sep);
	return (res);
}

// int main(void)
// {
// 	char *c[] = {"Hello", "Yan", "name"};
// 	printf("%s\n", ft_strjoin(3, c, "123"));
// }
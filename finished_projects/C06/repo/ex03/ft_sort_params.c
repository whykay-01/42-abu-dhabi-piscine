/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:37:29 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/04 14:37:31 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_array_of_strings(char *str[], int size)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < (size - 1))
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	cnt;

	i = 1;
	cnt = 0;
	argv = ft_sort_array_of_strings(argv, argc);
	while (i < argc)
	{
		while (argv[i][cnt] != '\0')
		{
			write(1, &(argv[i][cnt]), 1);
			cnt++;
		}
		cnt = 0;
		write(1, "\n", 1);
		i++;
	}
}

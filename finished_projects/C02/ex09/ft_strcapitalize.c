/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:40:17 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/01 12:41:35 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	alpha_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (!alpha_numeric(str[i]))
		{
			i++;
		}
		if (lower(str[i]))
			str[i] = str[i] - 32;
		i++;
		while (alpha_numeric(str[i]))
		{
			if (upper(str[i]))
				str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char	input[] = "salut, comment tu vas ? 42mots";
// 	int j = 0;

// 	ft_capitalize(input);
// 	while (input[j] != '\0')
// 	{
// 		printf("%c", input[j]);
// 		j++;
// 	}
// }

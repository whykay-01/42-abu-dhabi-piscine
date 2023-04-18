/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:33:44 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/02 13:33:45 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minus_count(char *str, int i)
{
	int	cnt;

	cnt = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cnt++;
		i++;
	}
	return (cnt);
}

int	sign_count(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	cnt_1;
	int	cnt_2;

	number = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == ' ' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\n'))
		i++;
	cnt_1 = minus_count(str, i);
	cnt_2 = sign_count(str, i);
	while (str[cnt_2] >= '0' && str[cnt_2] <= '9')
	{
		number = (10 * number) + (str[cnt_2] - 48);
		cnt_2++;
	}
	if ((cnt_1 % 2) == 0)
		return (number);
	else
		return (-number);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char c[] = "    -++-1514888asa888888";
// 	printf("%d\n", ft_atoi(c));
// }

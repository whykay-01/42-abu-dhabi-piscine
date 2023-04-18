/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:47:27 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/28 16:47:30 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 90 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	str = "Hellojdakdjkasj";
// 	printf("%d\n", ft_str_is_alpha(str));
// }

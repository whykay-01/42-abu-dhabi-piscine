/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:03:30 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/01 13:03:33 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while ((i < nb) && (src[i] != '\0'))
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char c[15] = "SOSI_HUI";
// 	char b[15] = "SUKAAAAAA";
// 	//ft_strncat(c, b, 5);
// 	printf("%s\n", ft_strncat(c, b, 5));
// }

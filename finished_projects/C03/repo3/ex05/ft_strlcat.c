/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:31:15 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/02 10:31:20 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	d_size;

	i = 0;
	d_size = 0;
	while (dest[d_size])
		d_size++;
	while (src[i] && (d_size < (size - 1)))
	{
		dest[d_size] = src[i];
		d_size++;
		i++;
	}
	dest[d_size] = '\0';
	return (d_size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char c[] = "hello";
// 	char b[] = "_suka";

// 	printf("%d\n", ft_strlcat(b, c, 0));
// }
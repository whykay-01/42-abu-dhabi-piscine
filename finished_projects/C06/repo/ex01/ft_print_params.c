/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:20:50 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/04 12:40:36 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	cnt;

	i = 1;
	cnt = 0;
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

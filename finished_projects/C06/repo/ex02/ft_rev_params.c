/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:41:38 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/04 12:41:41 by ykonichs         ###   ########.fr       */
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
		while (argv[argc - 1][cnt] != '\0')
		{
			write(1, &(argv[argc - 1][cnt]), 1);
			cnt++;
		}
		cnt = 0;
		write(1, "\n", 1);
		argc--;
	}
}

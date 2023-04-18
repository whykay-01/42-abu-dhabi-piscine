/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 12:12:27 by ykonichs          #+#    #+#             */
/*   Updated: 2022/06/04 12:19:21 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &(argv[0][i]), 1);
			i++;
		}
	}
	else
	{
	}
	write(1, "\n", 1);
}

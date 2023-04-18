/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Argmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:45:02 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/22 20:21:01 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y);

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*av1;
	char	*av2;

	av1 = argv[1];
	av2 = argv[2];
	x = atoi(av1);
	y = atoi(av2);
	(void)argc;
	rush(x, y);
	return (0);
}

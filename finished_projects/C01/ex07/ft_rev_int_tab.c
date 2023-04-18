/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:10:40 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/26 17:10:43 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	f = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[f];
		tab[f] = temp;
		i++;
		f--;
	}
}

/*int	main(void)
{
	int size = 6;
	int i = 0;
	int tab[]= {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(tab, 6);
	while (i < size)
	{
		char d = tab[i] + '0';
		write(1, &d, 1);
		i++;
	}
}*/
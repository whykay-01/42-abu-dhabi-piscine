/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:41 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/27 17:24:12 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*int	main(void)
{
	int size = 6;
	int i = 0;
	int tab[]= {4, 5, 7, 2, 2, 1};
	ft_sort_int_tab(tab, 6);
	while (i < size)
	{
		char d = tab[i] + '0';
		write(1, &d, 1);
		i++;
	}
}*/

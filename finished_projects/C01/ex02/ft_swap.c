/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykonichs <yan.konichshev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:27:33 by ykonichs          #+#    #+#             */
/*   Updated: 2022/05/25 16:27:36 by ykonichs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main(void)
{
	int	a;
	int b;
	int *p1;
	int *p2;
	
	a = 6;
	b = 8;
	p1 = &a;
	p2 = &b;
	ft_swap(p1, p2);
	printf("a = %d, b = %d", *p1, *p2);
}*/
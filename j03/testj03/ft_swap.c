/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:44:09 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/05 09:15:21 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;

	a = 42;
	b = 50;
	ptra = &a;
	ptrb = &b;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar('\n');
	ft_swap(ptra, ptrb);
	ft_putchar(a);
	ft_putchar(b);
	return (0);
}

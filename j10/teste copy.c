/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:35:27 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/12 13:55:46 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

int		ft_putnbr(int nb);

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int x;
	int *dest;

	x = 0;
	dest = (int *)malloc(sizeof(*dest) * length);
	if (tab == NULL)
		return (0);
	while (x < length)
	{
		dest[x] = f(tab[x]);
		x++;
	}
	return (dest);
}

int		main(void)
{
	int *tab;
	int x;

	x = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_map(tab, 4, &ft_putnbr);
	return (0);
}

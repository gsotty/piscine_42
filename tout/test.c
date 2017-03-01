/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 10:57:05 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/12 13:52:18 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int x;

	x = 0;
	while (x < length)
	{
		f(tab[x]);
		x++;
	}
}

void	ft_putchar(char	c);

void	ft_putnbr(int nb);

int		main(void)
{
	int	*tab;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}

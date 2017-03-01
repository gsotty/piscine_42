/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 23:17:52 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/01 12:00:56 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c);

void	ft_print_comb(void)
{
	int u;
	int d;
	int c;

	d = 0;
	while (c++ <= 9)
	{
		d = c;
		while (d++ <= 9)
		{
			u = d;
			while (u++ <= 9)
			{
				if ((u != d) && (u != c) && (d != c))
				{
					ft_putchar(c + 47);
					ft_putchar(d + 47);
					ft_putchar(u + 47);
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

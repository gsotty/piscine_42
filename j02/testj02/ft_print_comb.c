/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:54:17 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/01 17:25:11 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int u;
	int d;
	int c;

	c = 0;
	while (c++ <= 7)
	{
		d = c;
		while (d++ <= 8)
		{
			u = d;
			while (u++ <= 9)
			{
				ft_putchar(c + 47);
				ft_putchar(d + 47);
				ft_putchar(u + 47);
				if (c != 8)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}

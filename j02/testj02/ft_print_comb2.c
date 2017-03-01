/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 23:18:37 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/01 14:40:16 by gsotty           ###   ########.fr       */
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
	char n1;
	char n2;

	n1 = -1;
	while (n1++ < 99)
	{
		n2 = n1;
		while (n2++ < 99)
		{
			ft_putchar( '0' + (n1 / 10));
			ft_putchar( '0' + (n1 % 10));
			ft_putchar(' ');
			ft_putchar( '0' + (n2 / 10));
			ft_putchar( '0' + (n2 % 10));
			if ((n1 != 98) || (n2 != 99))
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
		}
	}
}


int		main(void)
{
	ft_print_comb();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 10:07:32 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/05 08:36:49 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_iterative_power(int nb, int power)
{
	int s;
	int c;

	s = 0;
	c = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	else
	{
		while (power > 1)
		{
			s = c * nb;
			c = s;
			power--;
		}
	}
	return (s);
}

int		main(void)
{
	ft_putchar('0' + ft_iterative_power(354, -455));
	ft_putchar('\n');
	return (0);
}

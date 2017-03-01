/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 15:41:42 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/03 19:26:15 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int 	ft_recursive_power(int nb, int power)
{
	int b;

	b = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 1)
	{
		b = b * ft_recursive_power(nb, power - 1);
	}
	return (b);
}	

int ft_sqrt(int nb)
{
	int x;
	
	x = 0;
	while(nb >= x)
	{
		if (nb == (ft_recursive_power(x, 2)))
		{
			ft_putchar(x);
			return (x);
		}
		x++;
	}
return (0);
}

int		main()
{
	ft_putchar('0' + ft_sqrt(0));
	return (0);
}

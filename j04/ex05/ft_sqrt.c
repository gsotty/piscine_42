/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 15:41:42 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/03 18:40:23 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
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

int		ft_sqrt(int nb)
{
	int x;

	x = 0;
	while (nb >= x)
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

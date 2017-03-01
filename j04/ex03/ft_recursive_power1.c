/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:13:48 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/03 17:53:14 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	printf("%d",ft_recursive_power(5, 2));
	return (0);	
}

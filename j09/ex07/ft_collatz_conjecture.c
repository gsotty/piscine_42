/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:25:17 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 13:37:06 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int x;

	x = 0;
	if (base == 1)
		return (x);
	if (base % 2 == 0)
	{
		x++;
		x = ft_collatz_conjecture(base / 2);
	}
	if (base % 2 != 0)
	{
		x++;
		x = ft_collatz_conjecture(base * 3 + 1);
	}
	x++;
	return (x);
}

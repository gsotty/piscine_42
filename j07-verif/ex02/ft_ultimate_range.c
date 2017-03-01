/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:39:55 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/08 13:10:44 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h

int		ft_ultimate_range(int **range, int min, int max)
{
	int x;

	x = 0;
	if (min >= max)
	{
		range[0] = NULL;
	}
	else
	{
		range[0] = (int *)malloc(sizeof(int) * (max - min));
		while (x < max - min)
		{
			range[0][x] = min + x;
			x++;
		}
		return (x);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:19:52 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/08 13:43:09 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int x;
	int *ret;

	x = 0;
	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(*ret) * (max - min));
	while (x < max - min)
	{
		ret[x] = min + x;
		x++;
	}
	return (ret);
}

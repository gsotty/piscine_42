/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:35:27 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/12 14:14:34 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int x;
	int *dest;

	x = 0;
	dest = (int *)malloc(sizeof(*dest) * length);
	if (tab == NULL)
		return (0);
	while (x < length)
	{
		dest[x] = f(tab[x]);
		x++;
	}
	return (dest);
}

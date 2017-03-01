/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:35:07 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 11:42:37 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_itoa_anex(int nbr, char *new, int test, int y)
{
	int x;

	x = 0;
	if (nbr < 0)
	{
		y = 0;
		nbr = -nbr;
		test = nbr;
		while (test > 0)
		{
			test = test / 10;
			x++;
			y++;
		}
		new = malloc(sizeof(new) * (x));
		new[0] = '-';
		x = 0;
		while (nbr > 0)
		{
			x = nbr % 10;
			nbr = nbr / 10;
			new[y--] = x + 48;
		}
	}
	return (new);
}

char	*ft_itoa_anex2(int nbr, char *new, int y)
{
	int x;

	x = 0;
	while (nbr > 0)
	{
		x = nbr % 10;
		nbr = nbr / 10;
		new[y] = x + 48;
		y--;
	}
	return (new);
}

char	*ft_itoa(int nbr)
{
	int		test;
	int		y;
	int		x;
	char	*new;

	x = 0;
	y = -1;
	test = nbr;
	if (nbr == 0)
	{
		new = malloc(sizeof(new) * (1));
		new[0] = '0';
		new[1] = '\0';
		return (new);
	}
	new = ft_itoa_anex(nbr, new, test, y);
	while (test > 0)
	{
		test = test / 10;
		x++;
		y++;
	}
	new = malloc(sizeof(new) * (x));
	new = ft_itoa_anex2(nbr, new, y);
	return (new);
}

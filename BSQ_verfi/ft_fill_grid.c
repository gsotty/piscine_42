/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:24:52 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/21 22:06:03 by tlenglin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_full(char **tab)
{
	int		x;

	x = 0;
	while (tab[0][x] != '\0')
	{
		x++;
	}
	return (tab[0][x - 1]);
}

int		ft_affichage(char **tab)
{
	int		x;
	int		y;

	x = 1;
	y = 0;
	while (x <= ft_hauteur(tab))
	{
		y = 0;
		while (y < ft_largeur(tab))
		{
			ft_putchar(tab[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}

int		ft_fill_grid(int *max, char **tab)
{
	int		i;
	int		j;
	int		x;
	int		y;
	char	full;

	full = ft_full(tab);
	y = ((max[1] / ft_largeur(tab)) + 1);
	x = (max[1] % ft_largeur(tab));
	j = (y + max[0]);
	i = (x + max[0]);
	while (y < j)
	{
		x = (max[1]) % ft_largeur(tab);
		while (x < i)
		{
			tab[y][x] = full;
			x++;
		}
		y++;
	}
	ft_affichage(tab);
	return (0);
}

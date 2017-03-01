/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:27:49 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 23:36:53 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_square(char **tab, int position, int *max)
{
	int x;
	int y;
	int i;
	int j;

	y = ((position - nbr_caract_tab0(tab)) / ft_largeur(tab)) + 1;
	x = ((position - nbr_caract_tab0(tab)) % ft_largeur(tab));
	j = 0;
	while (j <= max[0])
	{
		i = 0;
		while (i <= max[0])
		{
			ft_putstr(" max = ");
			ft_putnbr(max[0]);
			ft_putstr(" j = ");
			ft_putnbr(j);
			ft_putstr(" y = ");
			ft_putnbr(y);
			ft_putstr(" i = ");
			ft_putnbr(i);
			ft_putstr(" x = ");
			ft_putnbr(x);
			ft_putstr(" Y + J = ");
			ft_putnbr(y + j);
			ft_putstr(" X + I = ");
			ft_putnbr(x + i);
			ft_putstr(" hauteur = ");
			ft_putnbr(ft_hauteur(tab));
			ft_putstr(" largeur = ");
			ft_putnbr(ft_largeur(tab));
			ft_putstr(" PositionF = ");
			ft_putnbr((ft_largeur(tab)) * ft_hauteur(tab) + nbr_caract_tab0(tab));
			ft_putstr(" Position = ");
			ft_putnbr(position);
			ft_putchar('\n');
			if (tab[y + j][x + i] != ft_bonne_case(tab) ||
					y + j > ft_hauteur(tab) ||
					x + y > ft_largeur(tab))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int		*ft_check_tab(char **tab, int position, int *max, int *positionmax)
{
	int x;
	int y;

	y = (((position - nbr_caract_tab0(tab)) / ft_hauteur(tab)) + 1);
	x = (position - nbr_caract_tab0(tab)) % ft_hauteur(tab) + 1;
	/*ft_putstr(" Max = ");
	ft_putnbr(max[0]);
	ft_putstr(" Y = ");
	ft_putnbr(y);
	ft_putstr(" X = ");
	ft_putnbr(x);
	ft_putstr(" PositionF = ");
	ft_putnbr((ft_largeur(tab)) * ft_hauteur(tab) + nbr_caract_tab0(tab));
	ft_putstr(" Position = ");
	ft_putnbr(position);
	ft_putstr(" Nbr_caract_tab0 = ");
	ft_putnbr(nbr_caract_tab0(tab));
	ft_putstr(" Largeur = ");
	ft_putnbr(ft_largeur(tab));
	ft_putchar('\n');*/
	if (position == (ft_largeur(tab) * ft_hauteur(tab)) + nbr_caract_tab0(tab))
		return (max);
	else
	{
		if (ft_check_square(tab, position, max))
		{
			positionmax[0] = position;
			max[0] = max[0] + 1;
			ft_check_tab(tab, position, max, positionmax);
		}
		else
			ft_check_tab(tab, position + 1, max, positionmax);
	}
	return (max);
}

char	ft_bonne_case(char **tab)
{
	int		x;

	x = 0;
	while (tab[0][x] != '\0')
	{
		x++;
	}
	return (tab[0][x - 3]);
}

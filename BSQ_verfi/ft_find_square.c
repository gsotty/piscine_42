/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:27:49 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 22:07:38 by tlenglin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_square(char **tab, int position, int *max)
{
	int x;
	int y;
	int i;
	int j;

	y = (((position - nbr_caract_tab0(tab)) / ft_largeur(tab)) + 1);
	x = (((position - nbr_caract_tab0(tab)) % ft_largeur(tab)));
	j = 0;
	while (j <= max[0])
	{
		i = 0;
		while (i <= max[0])
		{
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

int		*ft_check_tab(char **tab, int position, int *max)
{
	int x;
	int y;

	y = (((position - nbr_caract_tab0(tab)) / ft_largeur(tab)) + 1);
	x = (position - nbr_caract_tab0(tab)) % ft_largeur(tab) + 1;
	if (position == (ft_largeur(tab) * ft_hauteur(tab)) + nbr_caract_tab0(tab))
		return (max);
	else
	{
		if (ft_check_square(tab, position, max))
		{
			max[1] = position;
			max[0] = max[0] + 1;
			ft_check_tab(tab, position, max);
		}
		else
			ft_check_tab(tab, position + 1, max);
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

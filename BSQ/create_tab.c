/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:07:39 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 23:33:50 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_create_tab(char *str)
{
	int		k;
	int		i;
	int		len0;
	int		j;
	char	**tab;

	i = 0;
	k = 0;
	j = 0;
	len0 = 0;
	tab = (char**)malloc(sizeof(char*) * ft_hauteur_tab(str) + 2);
	if (!tab)
		return (0);
	tab[k] = (char*)malloc(sizeof(char) * 30);
	if (!tab[k])
		return (0);
	while (str[len0] != '\n')
		len0++;
	while (i < len0 - 3)
	{
		tab[k][i] = str[i];
		i++;
	}
	tab[k][i] = ' ';
	i = i + 1;
	tab[k][i] = '\0';
	ft_strcat(tab[k], ft_itoa(ft_largeur_tab(str)));
	while (tab[k][i] != '\0')
		i++;
	tab[k][i] = ' ';
	i = i + 1;
	tab[k][i] = str[len0 - 3];
	i = i + 1;
	tab[k][i] = str[len0 - 2];
	i = i + 1;
	tab[k][i] = str[len0 - 1];
	i = i + 1;
	tab[k][i] = '\0';
	k++;
	j = len0;
	while (k < ft_hauteur_tab(str) + 1 && str[j])
	{
		tab[k] = (char*)malloc(sizeof(char) * ft_largeur_tab(str) + 1);
		if (!tab[k])
			return (0);
		i = 0;
		j++;
		while (str[j] != '\n')
		{
			tab[k][i] = str[j];
			i++;
			j++;
		}
		k++;
	}
	tab[k] = (char*)malloc(sizeof(char) * ft_largeur_tab(str) + 1);
	tab[k][0] = 's';
	return (tab);
}

int		ft_hauteur_tab(char *str)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			compteur++;
		i++;
	}
	return (compteur - 1);
}

int		ft_largeur_tab(char *str)
{
	int i;
	int compteur;

	i = 0;
	compteur = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		i++;
		compteur++;
	}
	return (compteur);
}

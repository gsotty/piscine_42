/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:07:39 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 23:40:25 by gsotty           ###   ########.fr       */
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
	k = 1;
	len0 = 0;
	tab = (char**)malloc(sizeof(char*) * ft_hauteur_tab(str) + 2);
	if (!tab)
		return (0);
	tab[0] = (char*)malloc(sizeof(char) * 30);
	if (!tab[0])
		return (0);
	while (str[len0] != '\n')
		len0++;
	ft_create_tab_bis(len0, tab, str);
	ft_create_tab_ter(tab, str, len0);
	return (tab);
}

int		ft_create_tab_ter(char **tab, char *str, int len0)
{
	int j;
	int i;
	int k;

	j = len0;
	k = 1;
	while (k <= ft_hauteur_tab(str) && str[j])
	{
		tab[k] = (char*)malloc(sizeof(char) * ft_largeur_tab(str));
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
	return (0);
}

int		ft_create_tab_bis(int len0, char **tab, char *str)
{
	int i;

	i = 0;
	while (i < len0 - 3)
	{
		tab[0][i] = str[i];
		i++;
	}
	tab[0][i] = ' ';
	i = i + 1;
	tab[0][i] = '\0';
	ft_strcat(tab[0], ft_itoa(ft_largeur_tab(str)));
	while (tab[0][i] != '\0')
		i++;
	tab[0][i] = ' ';
	i = i + 1;
	tab[0][i] = str[len0 - 3];
	i = i + 1;
	tab[0][i] = str[len0 - 2];
	i = i + 1;
	tab[0][i] = str[len0 - 1];
	i = i + 1;
	ab[0][i] = '\0';
	return (0);
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

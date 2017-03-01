/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:20:41 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 17:09:55 by tlenglin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_error(char *str)
{
	int		len0;
	int		i;
	char	*hauteur;

	len0 = 0;
	while (str[len0] != '\n')
		len0++;
	i = 0;
	hauteur = (char*)malloc(sizeof(char) * len0);
	if (!hauteur)
		return (0);
	while (i < len0 - 3)
	{
		hauteur[i] = str[i];
		i++;
	}
	hauteur[i] = '\0';
	return (ft_error_bis(str, len0, hauteur));
}

int		ft_error_bis(char *str, int len0, char *hauteur)
{
	int i;
	int compteur_ligne;
	int compteur_longueur;

	i = len0 + 1;
	compteur_ligne = 0;
	compteur_longueur = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			compteur_ligne++;
			if (compteur_longueur == 0)
				compteur_longueur = i - len0;
			else if ((i - len0) != (compteur_ligne) * compteur_longueur)
				return (0);
		}
		if (str[i] != str[len0 - 2] && str[i] !=
			str[len0 - 3] && str[i] != '\n')
			return (0);
		i++;
	}
	if (compteur_ligne != ft_atoi(hauteur))
		return (0);
	return (1);
}

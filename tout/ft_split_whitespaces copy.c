/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:36:27 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 09:49:59 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**tab(char *str, int len_word, int nbr_word)
{
	int	i;
	int	j;
	int	compteur;
	char **phrase;

	i = 0;
	compteur = 0;
	phrase = (char**)malloc(sizeof(char *) * nbr_word + 1);
	while (str[i] && compteur < nbr_word)
	{
		j = 0;
		phrase[compteur] = (char *)malloc(sizeof(**phrase) * len_word + 1);
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == 9) && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != 9 && str[i])
		{
			phrase[compteur][j] = str[i];
			i++;
			j++;
		}
		phrase[compteur][j] = '\0';
		compteur++;
	}
	phrase[nbr_word] = 0;
	return (phrase);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int len_word;
	int nbr_word;

	len_word = 0;
	i = 0;
	j = 0;
	nbr_word = 0;
	while (str && str[i])
	{
		j = 0;
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == 9 || str[i]
					== '\0') && str[i] && str[i++])
			if (str[i] != ' ' && str[i] != '\n' && str[i] == 9 && str[i])
			{
				nbr_word++;
				while (str[i] != ' ' && str[i] != '\n' && str[i]
						!= 9 && str[i] && str[i++])
					j++;
				if (j > len_word)
					len_word = j;
		}
	}
	return (tab(str, len_word, nbr_word));
}

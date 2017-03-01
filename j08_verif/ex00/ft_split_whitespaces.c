/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:36:27 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 12:59:13 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**tab(char *str, int len_word, int nbr_word)
{
	int		i;
	int		j;
	int		z;
	char	**phrase;

	i = 0;
	z = 0;
	phrase = (char**)malloc(sizeof(**phrase) * (nbr_word + 1));
	while (str[i] && z < nbr_word)
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		j = 0;
		phrase[z] = (char *)malloc(sizeof(char *) * len_word + 1);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
		{
			phrase[z][j] = str[i];
			i++;
			j++;
		}
		phrase[z][j] = '\0';
		z++;
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
	nbr_word = 0;
	while (str && str[i])
	{
		j = 0;
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] == '\t' && str[i])
		{
			nbr_word++;
			j = 0;
			while (str[i] != ' ' && str[i] != '\n' && str[i]
					!= '\t' && str[i++])
				j++;
			if (j > len_word)
				len_word = j;
		}
	}
	return (tab(str, len_word, nbr_word));
}

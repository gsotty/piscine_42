/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:09:02 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/13 13:27:40 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;
	
	i = 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		printf("%s", tab[i]);
		printf("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	char **tab;
	int i;
	int j;

	i = 0;
	if (argc != 1)
	{
		tab = (char**)malloc(sizeof(char*) * 5);
		while (argv[i])
		{
			j = 0;
			tab[i] = (char*)malloc(sizeof(char) * 5);
			while (argv[i][j])
			{
				tab[i][j] = argv[i][j];
				j++;
			}
			i++;
		}
		printf("bonjour");
		ft_sort_wordtab(tab);
	}
	return (0);
}

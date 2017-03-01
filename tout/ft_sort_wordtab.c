/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 09:09:02 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/13 12:12:39 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		i++;
	}
}

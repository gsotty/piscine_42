/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 14:05:11 by epillot           #+#    #+#             */
/*   Updated: 2016/09/11 11:27:34 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int **tab, int a, int i)
{
	int		j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == a)
			return (0);
		j++;
	}
	return (1);
}

int		ft_check_column(int **tab, int a, int j)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == a)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_square(int **tab, int a, int i, int j)
{
	int		k;
	int		l;

	k = i - (i % 3);
	l = j - (j % 3);
	i = k;
	j = l;
	while (i < k + 3)
	{
		while (j < l + 3)
		{
			if (tab[i][j] == a)
				return (0);
			j++;
		}
		j = l;
		i++;
	}
	return (1);
}

int		ft_check(int **tab, int pos)
{
	int		i;
	int		j;
	int		a;

	a = 1;
	if (pos == 81)
		return (1);
	j = pos % 9;
	i = pos / 9;
	if (tab[i][j] != 0)
		return (ft_check(tab, pos + 1));
	while (a <= 9)
	{
		if ((ft_check_line(tab, a, i) == 1)
				&& (ft_check_column(tab, a, j) == 1)
				&& (ft_check_square(tab, a, i, j) == 1))
		{
			tab[i][j] = a;
			if (ft_check(tab, pos + 1))
				return (1);
		}
		a++;
	}
	tab[i][j] = 0;
	return (0);
}

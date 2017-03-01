/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 13:09:24 by epillot           #+#    #+#             */
/*   Updated: 2016/09/11 14:55:04 by epillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int **tab, int a, int i);

int		ft_check_square(int **tab, int a, int i, int j);

int		ft_check_column(int **tab, int a, int j);

int		ft_valid(int **tab)
{
	int	i;
	int	j;
	int tmp;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j++ < 9)
		{
			if (tab[i][j] != 0)
			{
				tmp = tab[i][j];
				tab[i][j] = 0;
				if ((ft_check_line(tab, tmp, i) == 0)
						|| (ft_check_column(tab, tmp, j) == 0)
						|| (ft_check_square(tab, tmp, i, j) == 0))
					return (0);
				tab[i][j] = tmp;
			}
		}
		j = 0;
		i++;
	}
	return (1);
}

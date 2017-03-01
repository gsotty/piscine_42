/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:27:25 by epillot           #+#    #+#             */
/*   Updated: 2016/09/11 11:27:27 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int		ft_chartoi(char c);

void	ft_putchar(char c);

void	ft_check(int **tab, int pos);

int		**ft_tableau(void)
{
	int		i;
	int		**tab;

	i = 0;
	tab = malloc(sizeof(*tab) * 9);
	if (tab == NULL)
		return (0);
	while (i < 10)
	{
		tab[i] = malloc(sizeof(**tab) * 9);
		if (tab[i] == NULL)
			return (0);
		i++;
	}
	return (tab);
}

void	ft_print_tab(int **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putnbr(tab[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}

int		ft_point(int **tab, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				argv[i + 1][j] = '0';
			tab[i][j] = ft_chartoi(argv[i + 1][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int j;
	int i;
	int y;
	int x;
	int	**tab;

	if (argc != 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	tab = ft_tableau();
	ft_point(tab, argv);
	ft_check(tab, 0);
	ft_print_tab(tab);
	return (0);
}

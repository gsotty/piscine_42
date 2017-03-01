/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:27:25 by epillot           #+#    #+#             */
/*   Updated: 2016/09/13 11:23:43 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int		ft_chartoi(char c);

void	ft_putchar(char c);

int		ft_valid(int **tab);

int		ft_check(int **tab, int pos);

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
			if ((argv[i + 1][j] < '0' || argv[i + 1][j] > '9')
					&& (argv[i + 1][j] != '.'))
				return (0);
			if (argv[i + 1][j] == '.')
				argv[i + 1][j] = '0';
			tab[i][j] = ft_chartoi(argv[i + 1][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int	**tab;
	int	i;

	i = 1;
	tab = ft_tableau();
	ft_point(tab, argv);
	while (i < 10)
	{
		if ((argc != 10) || (ft_strlen(argv[i]) != 9)
				|| (ft_valid(tab) == 0) || ft_point(tab, argv) == 0)
		{
			write(1, "Erreur\n", 7);
			return (0);
		}
		i++;
	}
	ft_check(tab, 0);
	ft_print_tab(tab);
	return (0);
}

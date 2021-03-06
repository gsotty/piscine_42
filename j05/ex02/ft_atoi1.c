/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 09:10:49 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/07 08:50:14 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		ft_strlen(char *str, char x)
{
	int y;
	int z;
	int sortie;

	y = 1;
	sortie = 0;
	while (str[x] >= '0' && str[x] <= '9')
		x++;
	z = 1;
	while (x >= z)
	{
		sortie = (sortie + ((str[x - z] - 48) * y));
		y = y * 10;
		z++;
	}
	return (sortie);
}

int		ft_atoi(char *str)
{
	int x;
	int y;
	int z;
	int sortie;

	x = 0;
	if (str[x] == '-')
	{
		sortie = ft_strlen(str + 1, x);
		sortie = sortie * -1;
	}
	else
	{
		sortie = ft_strlen(str, x);
	}
	return (sortie);
}

int 	main(void)
{
	char *z;

	z = "   -12";
	ft_putchar(ft_atoi(z));
	ft_putchar('\n');
	ft_putchar(atoi(z));
	return (0);
}

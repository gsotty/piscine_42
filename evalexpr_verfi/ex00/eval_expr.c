/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:09:38 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:31:24 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*sup_les_espace(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = (char *)malloc(sizeof(str2) * ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str2);
}

int		eval_expr(char *str)
{
	str = sup_les_espace(str);
	if (str[0] == '\0')
		return (0);
	return (calcul(&str));
}

int		main(int ac, char **av)
{
	int x;

	x = 0;
	if (ac > 1)
	{
		x = eval_expr(av[1]);
		ft_putnbr(x);
		ft_putchar('\n');
	}
	return (0);
}

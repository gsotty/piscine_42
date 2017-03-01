/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erepifan <erepifan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 10:15:27 by erepifan          #+#    #+#             */
/*   Updated: 2016/09/04 14:28:38 by erepifan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	colle(int x, int y)
{
	int i;
	int j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
				ft_putchar('o');
			else if (i == 0 || i == x - 1)
				ft_putchar('|');
			else if (j == 0 || j == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
		if (x > 0)
			ft_putchar('\n');
	}
}

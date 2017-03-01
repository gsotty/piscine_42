/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 11:14:49 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/04 18:17:57 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_ligne(int x, int a, int b, int d)
{
	int l;
	int c;

	l = x - 2;
	ft_putchar(a);
	if (x == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	x--;
	while (l != 0)
	{
		ft_putchar(b);
		x--;
		l--;
	}
	if (x == 1)
	{
		ft_putchar(d);
	}
	ft_putchar('\n');
	return (0);
}

int		colle(int x, int y)
{
	int c;

	c = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (c == 1 )
	{
		ft_ligne(x, 'A', 'B', 'C');
		c++;
		while (c < y)
		{
			ft_ligne(x, 'B', ' ', 'B');
			c++;
		}
	}
	while (c == y)
	{
		ft_ligne(x, 'A', 'B', 'C');
		c++;
	}
	if (c > y)
	{
		return (0);
	}
	return (0);
}

int		main(void)
{
	colle(5, 1);
	return (0);
}

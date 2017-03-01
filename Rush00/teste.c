/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 09:37:00 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/10 08:27:11 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int 	colle(int x,int y)
{
	int l;
	int c;
	int tmp;
	int d;

	d = 1;
	c = 1;
	tmp = x;
	while ( d == 1 )
	{
		while (c == 1 || c == b)
		{
			a = tmp;
			l = a - 2;
			ft_putchar('A');
			if (a == 1)
			{
				return (0);
			}
			a--;
			while (l != 0)
			{
				ft_putchar('B');
				a--;
				l--;
			}
			if (a == 1)
			{
				ft_putchar('C');
			}
			c++;
			ft_putchar('\n');
		}
		while (c < b)
		{
			a = tmp;
			l = a - 2;
			ft_putchar('B');
			if (a == 1)
			{
				return (0);
			}
			a--;
			while (l != 0)
			{
				ft_putchar(' ');
				a--;
				l--;
			}
			if (a == 1)
			{
				ft_putchar('B');
			}
			c++;
			ft_putchar('\n');
		}
		if 	( c > b)
		{
			return (0);
		}
	}

	return (0);
}

int 	main(void)
{
	colle(1, 5);
	return (0);


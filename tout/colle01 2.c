/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 19:11:52 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/04 19:12:04 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_condition(int line, int column, int x, int y)
{
	if (column == 1 && line == 1)
		ft_putchar('/');
	else if (column == 1 && line == x)
		ft_putchar('\\');
	else if (column == y && line == x)
		ft_putchar('/');
	else if (line == 1 && column == y)
		ft_putchar('\\');
	else if (line == 1 || line == x)
		ft_putchar('*');
	else if (column == 1 || column == y)
		ft_putchar('*');
	else
		ft_putchar(' ');
	if (column == y && line != x)
		ft_putchar('\n');
}

void		colle(int x, int y)
{
	int		line;
	int		column;

	line = 1;
	if (x >= 0 && y >= 0)
	{
		while (line <= x)
		{
			column = 1;
			while (column <= y)
			{
				ft_condition(line, column, x, y);
				column++;
			}
			line++;
		}
	}
}

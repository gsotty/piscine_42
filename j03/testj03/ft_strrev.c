/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 09:41:18 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/05 09:15:59 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char 	*ft_strrev(char *str)
{
	int x;
	int y;
	char c;

	x = 0;
	while (str[x] != '\n')
	{
		x++;
	}
	ft_putchar(x);
	while (y != x)
	{
		c = str[x];
		str[x] = str[y];
		str[y] = c;
		x--;
		y++;
	}
	return (str);
}

int		main(void)
{
	char *str;

	str = "bonjour";
	ft_putchar(ft_strrev(str));
	return (0);
}

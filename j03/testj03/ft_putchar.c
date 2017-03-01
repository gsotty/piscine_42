/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 22:38:39 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/05 07:51:15 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while ( str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}


int		main(void)
{
	char *str;

	str = "bonjour";
	ft_putstr(str);
	return (0);
}

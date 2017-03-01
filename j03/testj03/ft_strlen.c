/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 23:37:01 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/02 09:45:52 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while ( str[x] != '\0')
	{
		x++;
	}
x++;	
return (x);
}


int		main(void)
{
	char *str;

	str = "bonjour";
	ft_putchar(ft_strlen(str));
	return (0);
}

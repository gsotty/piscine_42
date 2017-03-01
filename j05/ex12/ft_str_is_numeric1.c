/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:41:41 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 22:21:21 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		ft_str_is_numeric(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int 	main(void)
{
	char str[] = "012345689";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('0' + ft_str_is_numeric(str));
	return (0);
}

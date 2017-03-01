/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 09:07:49 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 09:45:47 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

char	*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 'a' + 'A';
		}
		x++;
	}
	return (str);
}

int 	main(void)
{
	char str[] = "Bonjour ComMo!@#$%^&*()7896545632";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(ft_strupcase(str));
	return (0);
}

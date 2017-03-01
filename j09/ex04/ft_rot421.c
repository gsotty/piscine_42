/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 00:37:25 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 14:05:46 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

char	*ft_rot42(char *str)
{
	int		x;
	char	y;

	y = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = ((str[x] - 'A' + 42) % 26 + 'A');
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = ((str[x] - 'a' + 42) % 26 + 'a');
		x++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "BonJour za wa !!";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(ft_rot42(str));
}

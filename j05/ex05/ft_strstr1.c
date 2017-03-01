/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:20:32 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 17:02:13 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
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

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x])
	{
		y = 0;
		if (str[x] == to_find[y])
		{
			while (str[x + y] && str[x + y] == to_find[y])
				y++;
			if (to_find[y] == '\0')
				return (str + x);
			else
				y = 0;
			y++;
		}
		x++;
	}
	return (0);
}

#include <string.h>

int		main(void)
{
	char str[] = "c9b4jq34ayv56rwp5cmtbz26";
	char to_find[] = "6";
	//char *teste1[] = strstr(str, to_find);
	//char *teste2[] = ft_strstr(str, to_find);

	ft_putstr(str);
	ft_putchar('\n');
	if (strstr(str, to_find) == 0)
	   ft_putchar('1');
	else 
		ft_putstr(strstr(str, to_find));
	ft_putchar('\n');
	if (ft_strstr(str, to_find) == 0)
		ft_putchar('1');
	else
		ft_putstr(ft_strstr(str, to_find));
	return (0);
}

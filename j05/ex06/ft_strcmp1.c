/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 23:10:29 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/07 09:28:14 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int 	ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if(s1[x] == s2[x])
			return (0);
		else
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int 	main(void)
{
	char *s1 = "qweuty";
	char *s2 = "qwerty";
	int str1;
	int str2;
	int x;
	int y;

	str1 = 0;
	str2 = 0;
	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		str1 = strcmp(s1 + x, s2 + x);
		ft_putchar(str1 + '0');
		x++;
	}
	ft_putchar('\n');
	y = 0;
	while (s1[y] != '\0' || s2[y] != '\0')
	{
		str2 = ft_strcmp(s1 + y, s2 + y);
		ft_putchar(str2 + '0');
		y++;
	}
	//ft_putchar('\n');
	//ft_putstr(s1);
	//ft_putchar('\n');
	//ft_putstr(s2);
	//ft_putchar('\n');
	//ft_putchar(str + '0');
}

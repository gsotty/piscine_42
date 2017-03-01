/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 08:28:13 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 22:06:47 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int 	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void 	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}

}

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int x;

	x = 0;
	while (x != n)
	{
		if(s1[x] == s2[x])
			return (0);
		else
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

int		main(void)
{
	char *s1 = "abcdefghi";
	char *s2 = "bcdefghij";
	char str1;
	char str2;
	int x;
	int y;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		str1 = strncmp(s1 + x, s2 + x, 5);
		ft_putchar(str1 + '0');
		x++;
	}
	ft_putchar('\n');
	y = 0;
	while (s1[y] != '\0' || s2[y] != '\0')
	{
		str2 = ft_strncmp(s1 + y, s2 + y, 5);
		ft_putchar(str2 + '0');
		y++;
	}
}

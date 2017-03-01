/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:37:16 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 16:34:42 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
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

int 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	if (n > 0)
	{
		while (x < n)
		{
			dest[x] = src[x];
			x++;
		}
		while (dest[x] != '\0')
		{
			dest[x] = '\0';
			x++;
		}
	}
	return (0);
}

int 	main(void)
{
	char src[] = "hello world";
	char dest[] = "bonjour";
	int x;

	x = 8;
	ft_strncpy(dest, src, x);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putchar (1);
	strncpy(dest, src, x);
	ft_putstr(dest);
	return (0);
}

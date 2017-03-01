/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:16:48 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 23:05:25 by gsotty           ###   ########.fr       */
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

char     *ft_strcpy(char *dest, char *src)
{
 	int x;

	x = 0;
   	while (src[x] != '\0')
	{
 		dest[x] = src[x];
		x++;
	}
	while (dest[x] != '\0')
	{
		dest[x] = scr[x];
		x++;
	}
  	return (0);
}

int     main(void)
{
	char src[]="hello world";
	char dest[]="bonjour le monde";

	ft_strcpy(dest, src);
  	ft_putstr(dest);
 	return (0);
}

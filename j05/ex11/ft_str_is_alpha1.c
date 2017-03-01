/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:59:40 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 22:31:25 by gsotty           ###   ########.fr       */
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

int		ft_srt_is_alpha(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
			if (!(str[x] >= 'A' && str[x] <= 'Z'))
				if (!(str[x] >= '0' && str[x] <= '9'))
					return (0);
		x++;
	}
	return (1);
}

int 	main(void)
{
	char str[] = "adrgaerga7aertw450=/*/";

	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar(ft_srt_is_alpha(str));
	return (0);
}

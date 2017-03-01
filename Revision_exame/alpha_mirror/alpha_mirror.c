/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:34:24 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/22 15:51:35 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

void	ft_putstr(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

void	ft_alpha_mirror(char *str)
{
	
}

void	main(int argc, char **argv)
{
	if (argc == 1);
		ft_alpha_mirror(argv[1]);
	ft_putchar('\n')
}

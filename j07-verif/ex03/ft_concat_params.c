/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 19:02:38 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/08 11:23:31 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
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

int		ft_strlen(char **str)
{
	int	x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = -1;
	while (str[x] != '\0')
	{
		z++;
		while (str[x][y] != '\0')
			y++;
		z = z + y;
		y = 0;
		x++;
	}
	return (x);
}

char	*ft_concat_params(int argc, char **argv)
{
	int x;
	int y;
	int i;
	char *dest;

	x = 1;
	y = 0;
	i = 0;
	if (argc != 1)
	{
		dest = (char *)malloc(sizeof(char) * (ft_strlen(argv)));
		while (x < argc)
		{
			while (argv[x][y] != '\0')
			{
				dest[i] = argv[x][y];
				y++;
				i++;
			}
			if (i == (ft_strlen(argv)))
				dest[i] = '\0';
			else
				dest[i] = '\n';
			i++;
			y = 0;
			x++;
		}
		ft_putstr(dest);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_concat_params(argc, argv);
	return (0);	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 13:41:26 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 15:28:33 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x;
	int y;
	int z;
	char *str[3];

	str[0] = "president";
	str[1] = "attack";
	str[2] = "Powers";
	x = 0;
	y = 0;
	z = 0;
	if (argc != 1)
	{
		while (argv[x] != '\0')
		{
			while (argv[x][y] != '\0')
			{
				if (argv[x][z] == str[0][z] || argv[x][z] == str[1][z] || argv[x][z]
						== str[2][z])
				{
					if (str[0][z] != '\0' || str[1][z] != '\0' || str[2][z] != '\0')
						write(1, "Alert!!!", 8);
					z++;
					y++;
				}
				z = 0;
				y++;
			}
			y = 0;
			x++;
		}
	}
}

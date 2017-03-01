/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:20:32 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 17:04:34 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x])
	{
		y = 0;
		while (str[x] == to_find[y])
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

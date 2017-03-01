/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 23:28:30 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/07 19:38:19 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
		x++;
	while (dest[y + x] == to_find[x])
	{
		y++;
		if (to_find != '\0')
			return (str + x);
		x++;
	}
	return (0);
}
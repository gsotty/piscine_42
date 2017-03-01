/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:17:40 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 16:19:27 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_strncpy(char *dest, char *src, unsigned int n)
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

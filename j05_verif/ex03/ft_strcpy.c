/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:33:16 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/07 11:44:15 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_strcpy(char *dest, char *src)
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
		dest[x] = '\0';
		x++;
	}
	return (0);
}

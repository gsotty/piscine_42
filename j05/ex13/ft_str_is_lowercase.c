/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 22:24:50 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/06 22:42:30 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

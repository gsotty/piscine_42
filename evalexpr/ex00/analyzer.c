/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:10:34 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:54:17 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	analyzer(char **str)
{
	int		nbr;
	int		signe;

	nbr = 0;
	signe = 1;
	if (*str[0] == '+' || *str[0] == '-')
	{
		if (*str[0] == '-')
			signe = -1;
		*str = *str + 1;
	}
	while ('0' <= *str[0] && *str[0] <= '9')
	{
		nbr = ((nbr * 10) + (*str[0] - '0'));
		*str = *str + 1;
	}
	if (*str[0] == '(')
	{
		*str = *str + 1;
		nbr = calcul(str);
		if (*str[0] == ')')
			*str = *str + 1;
		return (signe * nbr);
	}
	return (signe * nbr);
}

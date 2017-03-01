/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_pre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:12:48 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:32:15 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		calcul_pre(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operateur;

	nbr1 = calcul(str);
	while ('0' <= *str[0] && *str[0] <= '9')
	{
		nbr2 = ((nbr2 * 10) + (*str[0] - '0'));
		*str = *str + 1;
	}
	while (*str[0] == '*' || *str[0] == '/' || *str[0] == '%')
	{
		operateur = *str[0];
		*str = *str + 1;
		nbr2 = analyzer(str);
		nbr1 = do_op(nbr1, operateur, nbr2);
	}
	return (nbr1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:03:19 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:33:55 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		calcul(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operateur;

	nbr1 = analyzer(str);
	while (*str[0] != '\0' && *str[0] != ')')
	{
		operateur = *str[0];
		*str = *str + 1;
		if (operateur == '+' || operateur == '-')
		{
			nbr2 = analyzer(str);
		}
		else
			nbr2 = calcul_pre(str);
		nbr1 = do_op(nbr1, operateur, nbr2);
	}
	return (nbr1);
}

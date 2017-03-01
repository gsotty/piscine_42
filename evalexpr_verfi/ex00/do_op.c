/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:07:33 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:07:34 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		do_op(char nbr1, char oper, char nbr2)
{
	if (oper == '+')
		return (nbr1 + nbr2);
	else if (oper == '-')
		return (nbr1 - nbr2);
	else if (oper == '*')
		return (nbr1 * nbr2);
	else if (oper == '/')
		return (nbr1 / nbr2);
	else if (oper == '%')
		return (nbr1 % nbr2);
	else
		return (0);
}

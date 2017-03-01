/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 23:16:07 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/01 11:57:18 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int chiffres;

	chiffres = '0';
	while (chiffres <= '9')
	{
		ft_putchar(chiffres);
		chiffres++;
	}
}

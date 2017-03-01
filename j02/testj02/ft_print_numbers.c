/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 14:54:17 by gsotty            #+#    #+#             */
/*   Updated: 2016/08/31 17:41:59 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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

int		main(void)
{
	ft_print_numbers();
	return (0);
}

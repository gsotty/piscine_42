/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonaccio.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:53:21 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/04 21:20:37 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_fibonacci(int index)
{
	int b;

	b = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		b = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (b);
	}
	return (b);
}

int		main(void)
{
	ft_putchar('0' + ft_fibonacci(7));
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 21:27:38 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/05 07:59:22 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int		a;
	int		b;
	int		*ptr1;
	int		*ptr2;

	a = 7;
	b = 3;
	ptr1 = &a;
	ptr2 = &b;
	ft_div_mod(a, b, ptr1, ptr2);
	ft_putchar(*ptr1);
	ft_putchar('\n');
	ft_putchar(*ptr2);
	ft_putchar('\n');
	ft_putchar(2);
	ft_putchar(1);
	return (0);
}

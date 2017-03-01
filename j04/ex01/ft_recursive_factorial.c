/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 16:21:44 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/03 09:45:07 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int b;

	b = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		b = b * ft_recursive_factorial(nb - 1);
	}
	return (b);
}

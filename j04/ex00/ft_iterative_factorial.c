/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 12:32:17 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/02 16:18:46 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int c;
	int a;

	c = 1;
	a = 0;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (a < nb)
		{
			c = (c * (nb - a));
			a++;
		}
		return (c);
	}
}
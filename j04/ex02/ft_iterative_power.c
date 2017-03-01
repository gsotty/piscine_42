/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 10:07:32 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/03 13:44:26 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int s;
	int c;

	s = 0;
	c = nb;
	if (power <= 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		while (power > 1)
		{
			s = c * nb;
			c = s;
			power--;
		}
	}
	return (s);
}

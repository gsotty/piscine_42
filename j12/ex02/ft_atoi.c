/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:15:01 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/14 22:22:35 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_atoi(char *str)
{
	int		i;
	int		ret_atoi;
	int		sign;

	i = 0;
	sign = 0;
	ret_atoi = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret_atoi *= 10;
		ret_atoi += (str[i] - 48);
		i++;
	}
	if (sign < 0)
		ret_atoi *= -1;
	return (ret_atoi);
}

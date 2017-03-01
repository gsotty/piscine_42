/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 22:37:43 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/12 23:38:17 by gsotty           ###   ########.fr       */
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

int		ft_div(char **argv)
{
	int x;

	x = 0;
	if (argv[3][0] == '0')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	return (x);
}

int		ft_modul(char **argv)
{
	int x;

	x = 0;
	if (argv[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	return (x);
}

int		main(int argc, char **argv)
{
	int x;

	x = 0;
	if (argc == 4 )
	{
		if (argv[2][0] == '+')
			ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		if (argv[2][0] == '-')
			ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
		if (argv[2][0] == '*')
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		if (argv[2][0] == '/')
			ft_div(argv);
		if (argv[2][0] == '%')
			ft_modul(argv);
		if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
				argv[2][0] != '/' && argv[2][0] != '%')
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}

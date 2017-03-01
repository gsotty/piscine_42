/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:16:53 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/07 11:16:05 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	if (argc != 1)
	{
		while (argv[x] != '\0')
		{
			x++;
		}
		while (x != 1)
		{
			x--;
			ft_putstr(argv[x]);
			ft_putchar('\n');
		}
	}
	return (0);
}

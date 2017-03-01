/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:42:10 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/13 10:31:01 by gsotty           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 1)
	{
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					argv[0] = argv[j];
					argv[j] = argv[i];
					argv[i] = argv[0];
				}
				j++;
			}
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

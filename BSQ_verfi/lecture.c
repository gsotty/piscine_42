/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 10:38:45 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 23:14:33 by tlenglin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		x;
	int		*max;
	char	**tab;
	char	*stock;

	if (argc == 1)
		stock = ft_void();
	x = 0;
	while (++x < argc || stock != NULL)
	{
		max = (int*)malloc(sizeof(int) * 2);
		if (!max)
			return (0);
		max[0] = 0;
		max[1] = 0;
		if (stock == NULL)
			stock = ft_lecture(argv[x]);
		if (stock != NULL && ft_error(stock))
			ft_fonction(stock, max);
		stock = NULL;
	}
	return (0);
}

void	ft_fonction(char *stock, int *max)
{
	char **tab;

	tab = ft_create_tab(stock);
	ft_check_tab(tab, nbr_caract_tab0(tab), max);
	max[1] = max[1] - nbr_caract_tab0(tab);
	ft_fill_grid(max, tab);
	return ;
}

char	*ft_void(void)
{
	char	*buffer;
	char	*stock;

	stock = NULL;
	buffer = (char*)malloc(sizeof(char) + 1);
	if (!buffer)
		return (0);
	while ((read(0, buffer, 1)))
		stock = stockage(buffer, stock);
	return (stock);
}

char	*ft_lecture(char *str)
{
	int		fd;
	char	*buffer;
	char	*stock;

	stock = NULL;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() failed\n", 14);
		return (NULL);
	}
	buffer = (char*)malloc(sizeof(char) + 1);
	if (!buffer)
		return (0);
	while ((read(fd, buffer, 1)))
		stock = stockage(buffer, stock);
	return (stock);
}

char	*stockage(char *buffer, char *stock)
{
	int		i;
	int		len;
	char	*tampon;

	i = 0;
	len = 0;
	if (stock != NULL)
		while (stock[len])
			len = len + 1;
	tampon = (char*)malloc(sizeof(char) * len + 1);
	if (!tampon)
		return (0);
	if (stock != NULL)
		ft_strcpy(tampon, stock);
	stock = (char*)malloc(sizeof(char) * (len * 2 + 2));
	if (!stock)
		return (0);
	ft_strcpy(stock, tampon);
	while (buffer[i])
	{
		stock[len + i] = buffer[i];
		i++;
	}
	stock[len + i] = '\0';
	return (stock);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 10:38:45 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 19:53:24 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		x;
	int		fd;
	int		*max;
	int		*positionmax;
	char	**tab;
	char	*buffer;
	char	*stock;

	x = 1;
	while (x < argc)
	{
		max = (int*)malloc(sizeof(int));
		if (!max)
			return (0);
		max[0] = 0;
		positionmax = (int*)malloc(sizeof(int));
		if (!positionmax)
			return (0);
		positionmax[0] = 0;
		stock = NULL;
		fd = open(argv[x], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() failed\n");
			return (0);
		}
		buffer = (char*)malloc(sizeof(char) + 1);
		if (!buffer)
			return (0);
		while ((read(fd, buffer, 1)))
			stock = stockage(buffer, stock);
		tab = ft_create_tab(stock);
		ft_check_tab(tab, nbr_caract_tab0(tab), max, positionmax);
		positionmax[0] = positionmax[0] - nbr_caract_tab0(tab);
		ft_fill_grid(positionmax, max, tab);
		free(max);
		free(positionmax);
		free(buffer);
		if (close(fd) == -1)
		{
			write(2, "close() error\n", 14);
			return (0);
		}
		x++;
	}
	return (0);
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

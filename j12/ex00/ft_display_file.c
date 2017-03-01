/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:18:22 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/15 11:11:14 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_argc_bon(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY, 1);
	if (fd == -1)
	{
		write(2, "open() error\n", 13);
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		write(2, "close() error\n", 14);
		return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_argc_bon(argc, argv);
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many argument.\n", 19);
	return (0);
}

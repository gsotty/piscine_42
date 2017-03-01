/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:18:22 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/15 11:25:50 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

int		ft_putnbr(int nb);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putchar2(char c);

void	ft_putstr(char *str);

void	ft_putstr2(char *str);

int		ft_error(char *argv)
{
	if (EACCES == errno)
	{
		ft_putstr2("ft_cat: ");
		ft_putstr2(argv);
		ft_putstr2(": Permission denied\n");
		return (0);
	}
	if (EISDIR == errno)
	{
		ft_putstr2("ft_cat: ");
		ft_putstr2(argv);
		ft_putstr2(": Is a directory\n");
		return (0);
	}
	if (ENOENT == errno)
	{
		ft_putstr2("ft_cat: ");
		ft_putstr2(argv);
		ft_putstr2(": No such file or directory\n");
		return (0);
	}
	return (1);
}

int		ft_argc_egale_a_deux(int y, char **argv, int fd, int ret)
{
	int		x;
	char	buf[BUF_SIZE + 1];

	x = ft_atoi(argv[1]);
	fd = open(argv[2], O_APPEND);
	if (fd == -1)
	{
		ft_error(argv[2]);
		return (0);
	}
	lseek(fd, -x, SEEK_END);
	while (y <= x)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putchar(buf[0]);
		x--;
	}
	if (close(fd) == -1)
		ft_error(argv[2]);
	return (0);
}

int		ft_argc_plus_de_deux(int argc, char **argv, int fd, int ret)
{
	int		y;
	int		z;
	char	buf[BUF_SIZE + 1];

	z = 1;
	while (z++ < argc - 1)
	{
		ft_putstr("==> ");
		ft_putstr(argv[z]);
		ft_putstr(" <==\n");
		y = 0;
		fd = open(argv[z], O_APPEND);
		if (fd == -1)
			ft_error(argv[z]);
		lseek(fd, -(ft_atoi(argv[1])), SEEK_END);
		while ((y++ <= (ft_atoi(argv[1]) - 1)) && (fd != -1))
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putchar(buf[0]);
		}
		if ((close(fd) == -1) && (fd != -1))
			ft_error(argv[z]);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		y;
	int		fd;
	int		ret;

	y = 0;
	fd = 0;
	ret = 0;
	if (argc > 3)
		ft_argc_plus_de_deux(argc, argv, fd, ret);
	if (argc == 3)
		ft_argc_egale_a_deux(y, argv, fd, ret);
	if (argc < 2)
		return (0);
	return (0);
}

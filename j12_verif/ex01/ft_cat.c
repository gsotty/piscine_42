/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:18:22 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/14 21:56:36 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

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

int		ft_argc_moin_de_deux(int argc, char **argv, int fd, int ret)
{
	int		x;
	char	buf[BUF_SIZE + 1];

	while (1)
	{
		while ((ret = read(0, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
}

int		ft_argc_plus_de_deux(int argc, char **argv, int fd, int ret)
{
	int		x;
	char	buf[BUF_SIZE + 1];

	x = 1;
	while (x < argc)
	{
		fd = open(argv[x], O_RDONLY, 1);
		if (fd == -1)
		{
			ft_error(argv[x]);
			return (0);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			ft_error(argv[x]);
			return (0);
		}
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;

	if (argc >= 2)
		ft_argc_plus_de_deux(argc, argv, fd, ret);
	if (argc < 2)
		ft_argc_moin_de_deux(argc, argv, fd, ret);
	return (0);
}

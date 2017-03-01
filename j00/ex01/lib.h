/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 08:41:13 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/18 22:30:59 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIB_H
# define __FT_LIB_H

# include <unistd.h>
# include <stdlib.h>

int		calcul_pre(char **str);

char	analyzer(char **str);

int		do_op(char nbr1, char oper, char nbr2);

int		calcul(char **str);

int		ft_strlen(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlenglin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 11:38:59 by tlenglin          #+#    #+#             */
/*   Updated: 2016/09/21 19:30:13 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_atoi(char *str);
int		ft_error(char *str);
int		ft_largeur(char **tab);
int		ft_hauteur(char **tab);
int		ft_hauteur_tab(char *str);
int		ft_largeur_tab(char *str);
int		nbr_caract_tab0(char **tab);
int		ft_check_square(char **tab, int position, int *max);
int		ft_fill_grid(int *positionmax, int *max, char **tab);
int		*ft_check_tab(char **tab, int position, int *max, int *positionmax);
char	*ft_itoa(int nbr);
char	ft_full(char **tab);
char	ft_bonne_case(char **tab);
char	**ft_create_tab(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*stockage(char *buffer, char *stock);
char	*ft_itoa_annex2(int nbr, char *new, int y);
char	*ft_itoa_anex(int nbr, char *new, int test, int y);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrn(char *str, int n);

#endif

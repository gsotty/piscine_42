# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 19:43:44 by gsotty            #+#    #+#              #
#    Updated: 2016/09/14 18:22:43 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c ft_putchar.c ft_putstr.c ft_putstr2.c ft_putchar2.c

DEST = ft_cat.o ft_putchar.o ft_putstr.o ft_putstr2.o ft_putchar2.o

all: $(NAME) clean

$(NAME):
		gcc -c $(SRC)
		gcc -Wall -Wextra -Werror -o $(NAME) $(DEST)
clean:
		rm -f $(DEST)
fclean: clean
		rm -f $(DEST) $(NAME)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 19:43:44 by gsotty            #+#    #+#              #
#    Updated: 2016/09/14 11:49:49 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = do_op.c ft_putchar.c ft_putstr.c ft_putnbr.c

DEST = do_op.o ft_putchar.o ft_putstr.o ft_putnbr.o

all: $(NAME) clean

$(NAME):
		gcc -c $(SRC)
		gcc -Wall -Wextra -Werror $(DEST)
clean:
		rm -f *.o
fclean: clean
		rm -f a.out
re: fclean all

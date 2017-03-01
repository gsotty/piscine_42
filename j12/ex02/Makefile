# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 20:17:01 by gsotty            #+#    #+#              #
#    Updated: 2016/09/14 22:17:50 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c ft_putchar.c ft_putstr.c ft_putstr2.c ft_putchar2.c ft_atoi.c \
	  ft_putnbr.c

DEST = ft_tail.o ft_putchar.o ft_putstr.o ft_putstr2.o ft_putchar2.o ft_atoi.o \
	   ft_putnbr.o

all: $(NAME) clean

$(NAME):
		gcc -c $(SRC)
		gcc -Wall -Wextra -Werror -o $(NAME) $(DEST)
clean:
		rm -f $(DEST)
fclean: clean
		rm -f $(DEST) $(NAME)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 19:43:44 by gsotty            #+#    #+#              #
#    Updated: 2016/09/14 16:40:15 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c ft_putchar.c ft_putstr.c

DEST = ft_display_file.o ft_putchar.o ft_putstr.o

all: $(NAME) clean

$(NAME):
		gcc -c $(SRC)
		gcc -Wall -Wextra -Werror -o $(NAME) $(DEST)
clean:
		rm -f $(DEST)
fclean: clean
		rm -f $(DEST) $(NAME)
re: fclean all

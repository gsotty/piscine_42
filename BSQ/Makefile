# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/19 23:22:47 by gsotty            #+#    #+#              #
#    Updated: 2016/09/21 10:32:59 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = lecture.c fonctions_annexes.c ft_affichage.c create_tab.c itoa.c \
	  ft_find_square.c ft_hauteur.c ft_largeur.c ft_atoi.c ft_fill_grid.c

DEST = lecture.o fonctions_annexes.o ft_affichage.o create_tab.o itoa.o \
	   ft_find_square.o ft_hauteur.o ft_largeur.o ft_atoi.o ft_fill_grid.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(DEST)
clean:
	rm -f $(DEST)
fclean: clean
	rm -f $(DEST) $(NAME)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 19:43:44 by gsotty            #+#    #+#              #
#    Updated: 2016/09/18 22:50:19 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_strlen.c \
	  calcul.c \
	  do_op.c \
	  analyzer.c \
	  calcul_pre.c 

DEST = eval_expr.o \
	   ft_putchar.o \
	   ft_putstr.o \
	   ft_putnbr.o \
	   ft_strlen.o \
	   calcul.o \
	   do_op.o \
	   analyzer.o \
	   calcul_pre.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(DEST)
clean:
	rm -f $(DEST)
fclean: clean
	rm -f $(DEST) $(NAME)
re: fclean all

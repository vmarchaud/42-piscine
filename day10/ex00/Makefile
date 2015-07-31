# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 08:49:17 by vmarchau          #+#    #+#              #
#    Updated: 2015/07/21 16:26:03 by vmarchau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = libft.a
SRC_LIBS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
H_LIBS = includes

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I$(H_LIBS) -c $(SRC_LIBS)
	ar rc $(DEST) ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib $(DEST)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

fclean:	clean
	rm -f $(DEST)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/30 22:35:18 by vmarchau          #+#    #+#              #
#    Updated: 2015/07/30 22:37:15 by vmarchau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/main.c srcs/map.c srcs/file_util.c srcs/util.c srcs/util2.c
OBJ = main.o map.o file_util.o util.o util2.o
FLAGS = -Wall -Wextra -Werror
INCLUDE = includes/

all: $(NAME)
		gcc $(FLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ)
$(NAME):
		gcc $(FLAGS) -I$(INCLUDE) -c $(SRC)
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all

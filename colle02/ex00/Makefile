# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sganon <sganon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/25 10:43:46 by sganon            #+#    #+#              #
#    Updated: 2015/07/26 18:32:13 by sganon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c srcs/util.c srcs/pattern.c srcs/check_for_colle00.c \
	  srcs/check_for_colle01.c srcs/check_for_colle02_to_04.c \
	  srcs/check_for_colle02.c srcs/check_for_colle03.c \
	  srcs/check_for_colle04.c srcs/ft_putresult.c
HEADER = includes/
NAME = colle-2

all:
	gcc -Wall -Werror -Wextra -o $(NAME) -I$(HEADER) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

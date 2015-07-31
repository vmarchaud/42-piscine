# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 08:49:17 by vmarchau          #+#    #+#              #
#    Updated: 2015/07/25 19:05:05 by vmarchau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = eval_expr
SRC = srcs/main.c srcs/util.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

clean:
	rm -f $(DEST)

re: fclean all

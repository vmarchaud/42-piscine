# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 08:49:17 by vmarchau          #+#    #+#              #
#    Updated: 2015/07/22 16:34:22 by vmarchau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = do-op
SRC = srcs/main.c srcs/util.c srcs/operation.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

clean:
	rm -f $(DEST)

re: fclean all

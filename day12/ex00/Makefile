# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 08:49:17 by vmarchau          #+#    #+#              #
#    Updated: 2015/07/24 10:47:13 by vmarchau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = ft_display_file
SRC = srcs/main.c srcs/util.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

fclean:
	rm -f $(DEST)

clean : fclean

re: fclean all

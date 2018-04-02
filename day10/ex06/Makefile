#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mweir <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 10:15:55 by mweir             #+#    #+#              #
#    Updated: 2018/03/27 17:59:08 by mweir            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op
SRC = src/ft.c src/opps.c main.c
HEADER = includes/

all:
	@gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(NAME)

clean:
	@/bin/rm -f $(NAME)

re: clean all

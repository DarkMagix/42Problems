#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mweir <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 10:15:55 by mweir             #+#    #+#              #
#    Updated: 2018/03/27 19:13:23 by mweir            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

DEST = libft.a
SRC_LIBS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
H_LIBS = includes/

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I $(H_LIBS) -c $(SRC_LIBS)
	ar rc $(DEST) ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib $(DEST)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

fclean:	clean
	/bin/rm -f $(DEST)

re: fclean all

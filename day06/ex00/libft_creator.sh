gcc -c -Wextra -Werror -Wall ft_putchar.c ft_strlen.c ft_strcmp.c ft_putstr.c ft_swap.c
ar rc libft.a ft_putchar.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_swap.o
chmod 755 libft.a
rm -rf ft_putchar.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_swap.o
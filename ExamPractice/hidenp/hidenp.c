/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:45:41 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 11:52:02 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_hidenp(char *a, char* b)
{
	while(*b)
	{
		if(*a && *a == *b)
			a++;
		b++;
	}
	if (!*a)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:28:44 by mweir             #+#    #+#             */
/*   Updated: 2018/04/05 11:50:49 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int my_atoi(char *str)
{
	int sum;
	int i;

	sum = 0;
	i = 0;
	while(str[i])
	{
		sum = (sum * 10) + str[i] - '0';
		i++;
	}
	return (sum);
}

void ft_print_hex(char *str)
{
	char *hex;
	int number;
	int i;
	char *res;

	res = (char*)malloc(sizeof(char) * 16);
	i = 0;
	number = my_atoi(str);
	hex = "0123456789abcdef";

	while (number > 0)
	{		
		res[i] = hex[number % 16];
		number = number / 16;
		i++;
	}
	res[i] = '\0';
	i--;
	write(1, "0x", 2);
	while (i >= 0)
	{
		ft_putchar(res[i]);
		i--;
	}
	write(1, "\n", 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
		ft_print_hex(argv[1]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:15:45 by mweir             #+#    #+#             */
/*   Updated: 2018/03/26 16:43:11 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opps.h"
#include <stdlib.h>
#include "ft.h"

int		ft_check_nbr(char *str)
{
	int i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int sum;
	int i;
	int neg;

	i = 0;
	neg = 0;
	sum = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-sum);
	else
		return (sum);
}

void	ft_setup_table(int *nums, char *op)
{
	int(*table[5])(int, int);

	table[0] = &ft_add;
	table[1] = &ft_subtract;
	table[2] = &ft_divide;
	table[3] = &ft_multiply;
	table[4] = &ft_mod;
	if (*op == '+')
		ft_putnbr(table[0](nums[0], nums[1]));
	if (*op == '-')
		ft_putnbr(table[1](nums[0], nums[1]));
	if (*op == '/')
		ft_putnbr(table[2](nums[0], nums[1]));
	if (*op == '*')
		ft_putnbr(table[3](nums[0], nums[1]));
	if (*op == '%')
		ft_putnbr(table[4](nums[0], nums[1]));
}

void	ft_do_opps(int n1, char *op, int n2)
{
	int data[2];

	data[0] = n1;
	data[1] = n2;
	if (op[1] != '\0' || (op[0] != '/' && op[0] != '%'
				&& op[0] != '+' && op[0] != '-' && op[0] != '*'))
		write(1, "0\n", 2);
	else if (op[0] == '/' && data[1] == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (op[0] == '%' && data[1] == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_setup_table(data, op);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_opps(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	return (0);
}

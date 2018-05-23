/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:27:17 by mweir             #+#    #+#             */
/*   Updated: 2018/05/22 17:24:27 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int ft_is_letter(char c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

void rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (((str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0' || !ft_is_letter(str[i + 1]))))
		{
			if (str[i] >= 'a' && str[i] <='z')
				str[i] -=32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		rstr_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	if (ac < 2)
		write(1, "\n", 1);
	return (0);
}

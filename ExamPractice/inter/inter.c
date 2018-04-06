/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:55:18 by mweir             #+#    #+#             */
/*   Updated: 2018/04/03 21:07:19 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *str, char *str2)
{
	int	tab[256] = {0};
	int	a;
	
	a = 0;
	while (str[a])
	{
		if (tab[(int)str[a]] == 0)
		{
			tab[(int)str[a]] = 1;
			write(1, &str[a], 1);
		}
		a++;
	}
	a = 0;
	while (str2[a])
	{
		if (tab[(int)str2[a]] == 0)
		{
			tab[(int)str2[a]] = 1;
			write(1, &str2[a], 1);
		}
		a++;
	}
	a = 0;
}

int main(void)
{
	inter("padinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
	return (0);
}

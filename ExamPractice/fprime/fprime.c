/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:30:43 by mweir             #+#    #+#             */
/*   Updated: 2018/05/21 15:48:44 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void fprime(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1)
	{
		printf("1\n");
		return ;
	}
	while (nbr > 1)
	{
		if (nbr % i == 0)
		{
			nbr = nbr / i;
			printf("%d", i);
			if (nbr > 1)
				printf("*");
			i = 2;
		}
		else
			i++;
	}
	printf("\n");
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	else
		printf("\n");
//	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime_sum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:27:36 by mweir             #+#    #+#             */
/*   Updated: 2018/04/05 11:32:07 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_prime_sum(int nbr)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (nbr > 0)
	{
		if(nbr % i == 0)
		{
			sum += nbr / i;
			nbr /= i;
		}
		i++;
	}
	printf("%d", sum);
}

int main(int argc, char **argv)
{
	if(argc ==2)
		ft_prime_sum(atoi(argv[1]));
	return (0);
}

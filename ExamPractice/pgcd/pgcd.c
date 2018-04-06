/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:17:53 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 11:24:30 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int ft_pgcd(char *a, char *b)
{
	int i;
	int left;
	int right;
	int div;

	left = atoi(a);
	right = atoi(b);
	i = 1;
	while(i < ft_min(left, right))
	{
		if(left % i == 0 && right % i == 0)
			div =i;
		i++;
	}
	return (div);
}

int main(int argc, char **argv)
{
	printf("%d\n", ft_pgcd("42", "10"));
	printf("%d\n", ft_pgcd("42", "12"));
	printf("%d\n", ft_pgcd("14", "77"));
	printf("%d\n", ft_pgcd("17", "3"));
	printf("%d\n", ft_pgcd("32", "2064"));
	return (0);
}

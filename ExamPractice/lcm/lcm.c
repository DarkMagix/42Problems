/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:37:43 by mweir             #+#    #+#             */
/*   Updated: 2018/05/21 19:45:30 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int gcd(int m, int n)
{
	int tmp;
	while (m)
	{
		tmp = m;
		m = n % m;
		n = tmp;
	}
	printf("n: %d\n", n);
	return (n);
}

int lcm(int m, int n)
{
	return (m / gcd(m, n) *n);
}

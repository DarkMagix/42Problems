/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:42:00 by mweir             #+#    #+#             */
/*   Updated: 2018/04/04 15:13:24 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int index;

	index = 2;
	if (nb <= 1)
		return (0);
	else
		while (index < nb)
		{
			if (nb % index == 0)
				return (0);
			index++;
		}
	return (1);
}

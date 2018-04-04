/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:41:04 by mweir             #+#    #+#             */
/*   Updated: 2018/04/04 15:12:01 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int result;

	result = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 31)
		return (-1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
	return (0);
}

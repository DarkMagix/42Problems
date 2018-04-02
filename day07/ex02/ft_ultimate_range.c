/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:17:49 by mweir             #+#    #+#             */
/*   Updated: 2018/03/21 15:35:23 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	diff = max - min;
	tab = (int*)malloc(sizeof(*tab) * (diff));
	while (i < diff)
	{
		tab[i] = i + min;
		i++;
	}
	*range = tab;
	return (i);
}

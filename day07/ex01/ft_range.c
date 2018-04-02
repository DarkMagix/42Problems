/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 14:16:23 by mweir             #+#    #+#             */
/*   Updated: 2018/03/21 15:07:31 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int diff;
	int	*tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	tab = (int*)malloc(sizeof(min) * (diff));
	while (i < diff)
	{
		tab[i] = i + min;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

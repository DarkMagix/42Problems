/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:01:48 by mweir             #+#    #+#             */
/*   Updated: 2018/03/27 15:10:04 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	index;

	index = 0;
	current = begin_list;
	while (current != NULL)
	{
		if (index == nbr)
			return (current);
		index++;
		current = current->next;
	}
	return (NULL);
}

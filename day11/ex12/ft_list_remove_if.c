/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:12:40 by mweir             #+#    #+#             */
/*   Updated: 2018/03/27 17:03:48 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *current;

	prev = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = current->next;
			else
				prev->next = current->next;
		}
		if (current->next != *begin_list)
			prev = current;
		current = current->next;
	}
}

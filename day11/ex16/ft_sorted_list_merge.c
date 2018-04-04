/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:39:19 by mweir             #+#    #+#             */
/*   Updated: 2018/03/28 21:26:56 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *current;
	t_list *temp;

	current = *begin_list;
	if (current)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (cmp(current->data, data) <= 0 && current->next)
	{
		current = current->next;
	}
	temp = curent->next;
	current->next = ft_create_elem(data);
	current = current->next;
	current->next = temp;
}

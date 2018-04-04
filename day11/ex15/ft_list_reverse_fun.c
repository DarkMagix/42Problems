/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:10:47 by mweir             #+#    #+#             */
/*   Updated: 2018/03/28 13:27:35 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*current;
	void	*ref;
	t_list	*next;

	if (!begin_list)
		return ;
	current = begin_list;
	while (current)
	{
		next = current->next;
		while (next)
		{
			ref = current->data;
			current->data = next->data;
			next->data = ref;
			next = next->next;
		}
		current = current->next;
	}
}

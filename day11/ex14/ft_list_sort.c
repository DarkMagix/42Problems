/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:47:04 by mweir             #+#    #+#             */
/*   Updated: 2018/03/27 21:08:01 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_ptr_swap(void **a, void **b)
{
	void	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	int		swap;

	if (*begin_list == 0)
		return ;
	swap = 1;
	while (swap)
	{
		swap = 0;
		current = *begin_list;
		while (current->next)
		{
			if (cmp(current->data, current->next->data) > 0)
			{
				ft_ptr_swap(&current->data, &current->next->data);
				swap = 1;
			}
			current = current->next;
		}
	}
}

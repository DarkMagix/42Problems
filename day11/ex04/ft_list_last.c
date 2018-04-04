/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:06:09 by mweir             #+#    #+#             */
/*   Updated: 2018/03/27 13:11:13 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *t_node;

	t_node = begin_list;
	if (t_node)
	{
		while (t_node->next)
			t_node = t_node->next;
		return (t_node);
	}
	return (NULL);
}

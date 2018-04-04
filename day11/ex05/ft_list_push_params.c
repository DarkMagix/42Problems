/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:18:12 by mweir             #+#    #+#             */
/*   Updated: 2018/03/27 20:32:33 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new_l;
	t_list	*new_el;
	int		i;

	i = 0;
	new_l = NULL;
	while (i < ac)
	{
		new_el = ft_create_elem(av[i]);
		new_el->next = new_l;
		new_l = new_el;
		i++;
	}
	return (new_l);
}

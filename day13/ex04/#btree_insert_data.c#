/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:04:59 by mweir             #+#    #+#             */
/*   Updated: 2018/03/29 14:14:38 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (!(*root))
		btree_create_node(item);
	if (cmpf(item, *root->item) < 0)
		btree_insert_data(*root->left, item, cmpf);
	else
		btree_insert_data(*root->right, item, cmpf);
}

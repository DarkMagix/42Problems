/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:17:05 by mweir             #+#    #+#             */
/*   Updated: 2018/03/29 14:23:19 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	btree_search_item(root->left, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	btree_search_item(root->right, cmpf);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:24:56 by mweir             #+#    #+#             */
/*   Updated: 2018/03/29 14:28:52 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int left;
	int right;

	if (!root)
		return (0);
	left = 0;
	right = 0;
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return ((left > right) ? left : right + 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:30:11 by mweir             #+#    #+#             */
/*   Updated: 2018/03/30 10:47:45 by mweir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_btree.h"

int		max(int left, int right)
{
	if (left > right)
		return (left);
	return (right);
}

int		ft_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max(ft_count(root->left), ft_count(root->right)) + 1);
}

void	btree_apply_level2(t_btree *root, int current_level,
	int level,
	void (*applyf)(void *item, int current_l,
	int is_first_elem))
{
	if (!(root))
		return ;
	if (level == current_level)
		(*applyf)(root->item, current_level, 0);
	else
	{
		btree_apply_by_level2(root->left, current_level + 1, level, applyf);
		btree_apply_by_level2(root->right, current_level + 1, level, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int i;
	int j;

	i = ft_count(root);
	j = 0;
	while (j < i)
	{
		btree_apply_level2(root, i, j, applyf);
		j++;
	}
}

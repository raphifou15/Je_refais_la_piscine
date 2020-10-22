/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:16:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/22 17:49:42 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int			btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	if (root == NULL)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return (right > left) ? right + 1 : left + 1;
}

void		btree_apply_by_level2(t_btree *root, int *current, int level,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (level == 1)
	{
		applyf(root->item, current[0], current[1]);
		current[1] = 0;
	}
	if (level > 1)
	{
		if (root->left)
			btree_apply_by_level2(root->left, current, level - 1, applyf);
		if (root->right)
			btree_apply_by_level2(root->right, current, level - 1, applyf);
	}
}

void		btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	count;
	int	tab[2];
	int	i;

	i = 0;
	if (root == NULL)
		return ;
	count = btree_level_count(root);
	while (i < count)
	{
		tab[0] = i;
		tab[1] = 1;
		btree_apply_by_level2(root, tab, ++i, applyf);
	}
}

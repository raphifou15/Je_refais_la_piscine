/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:03:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/20 23:51:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_branch_left(t_btree *root, int count)
{
	if (root == NULL)
		return (count);
	if (root->left)
		count = ft_branch_left(root->left, count);
	if (root->right)
		ft_branch_left(root->right, count);
	return (count + 1);
}

int	ft_branch_right(t_btree *root, int count)
{
	if (root == NULL)
		return (count);
	if (root->left)
		ft_branch_right(root->left, count);
	if (root->right)
		count = ft_branch_right(root->right, count);
	return (count + 1);
}

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	left = ft_branch_left(root, 0);
	right = ft_branch_right(root, 0);
	return (left >= right) ? left : right;
}

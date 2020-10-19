/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:00:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 15:22:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_insert_right(t_btree **root, t_btree *node)
{
	(*root)->right = node;
}

void	ft_insert_left(t_btree **root, t_btree *node)
{
	(*root)->left = node;
}

void	ft_insert_root(t_btree **root, t_btree *node)
{
	*root = node;
}

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*new;
	t_btree	*temp;

	new = btree_create_node(item);
	if (*root == NULL)
		return (ft_insert_root(root, new));
	temp = *root;
	while (temp)
	{
		if (cmpf(item, temp->item) >= 0)
		{
			if (temp->right != NULL)
				temp = temp->right;
			else
				return (ft_insert_right(&temp, new));
		}
		else
		{
			if (temp->left != NULL)
				temp = temp->left;
			else
				return (ft_insert_left(&temp, new));
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:51:48 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 18:47:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_new(t_btree **root, t_btree *new)
{
	*root = new;
}

void	btree_insert_right(t_btree **root, t_btree *new)
{
	(*root)->right = new;
}

void	btree_insert_left(t_btree **root, t_btree *new)
{
	(*root)->left = new;
}

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*new;
	t_btree	*temp;

	temp = NULL;
	new = btree_create_node(item);
	if (*root == NULL)
		return (btree_insert_new(root, new));
	temp = *root;
	while (temp)
	{
		if (cmpf(item, temp->item) > 0)
		{
			if (temp->right)
				temp = temp->right;
			else
				return (btree_insert_right(&temp, new));
		}
		else
		{
			if (temp->left)
				temp = temp->left;
			else
				return (btree_insert_left(&temp, new));
		}
	}
}

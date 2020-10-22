/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:12:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/22 17:50:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_insert_new(t_btree **root, t_btree *new)
{
	*root = new;
}

void	ft_insert_right(t_btree **root, t_btree *new)
{
	(*root)->right = new;
}

void	ft_insert_left(t_btree **root, t_btree *new)
{
	(*root)->left = new;
}

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*new;
	t_btree	*temp;

	new = NULL;
	temp = NULL;
	new = btree_create_node(item);
	if (*root == NULL)
		return (ft_insert_new(root, new));
	temp = *root;
	while (temp)
	{
		if (cmpf(item, temp->item) >= 0)
		{
			if (temp->right == NULL)
				return (ft_insert_right(&temp, new));
			temp = temp->right;
		}
		else
		{
			if (temp->left == NULL)
				return (ft_insert_left(&temp, new));
			temp = temp->left;
		}
	}
}

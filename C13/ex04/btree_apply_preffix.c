/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_preffix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:48:42 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 11:51:42 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_preffix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
		applyf(root->item);
	if (root->left)
		btree_apply_preffix(root->left, applyf);
	if (root->right)
		btree_apply_preffix(root->right, applyf);
}

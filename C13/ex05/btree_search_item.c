/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:35:40 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 21:11:53 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*res;

	res = NULL;
	if (root->left)
		res = btree_search_item(root->left, data_ref, cmpf);
	if (res == NULL && cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (res == NULL && root->right)
		res = btree_search_item(root->right, data_ref, cmpf);
	return (res);
}

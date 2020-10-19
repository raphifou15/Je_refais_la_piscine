/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:17:01 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 18:48:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = NULL;
	if ((node = malloc(sizeof(*node))) == NULL)
		return (NULL);
	node->item = item;
	node->right = NULL;
	node->left = NULL;
	return (node);
}

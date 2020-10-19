/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:59:43 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 18:44:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_insert_strs(int size, char **strs)
{
	t_btree	*root;

	root = NULL;
	while (--size > -1)
		btree_insert_data(&root, strs[size], ft_strcmp_void);
	return (root);
}

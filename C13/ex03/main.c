/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:23:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/18 21:51:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;
	t_btree	*bl;
	t_btree	*br;

	(void)argc;
	root = NULL;
	bl = NULL;
	br = NULL;
	root = btree_create_node(argv[1]);
	bl = btree_create_node(argv[2]);
	br = btree_create_node(argv[3]);
	root->right = br;
	root->left = bl;
	btree_apply_preffix(root, ft_write);
	btree_apply_suffix(root, ft_free);
	return (0);
}

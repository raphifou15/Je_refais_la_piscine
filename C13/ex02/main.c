/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:59:49 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/18 19:03:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;
	t_btree	*branches_left;
	t_btree	*branches_right;

	(void)argc;
	root = NULL;
	branches_left = NULL;
	branches_right = NULL;
	root = btree_create_node(argv[1]);
	branches_left = btree_create_node(argv[2]);
	branches_right = btree_create_node(argv[3]);
	root->left = branches_left;
	root->right = branches_right;
	btree_apply_prefix(root, ft_write);
	btree_apply_infix(root, ft_write);
	free(root->left);
	root->left = NULL;
	free(root->right);
	root->right = NULL;
	free(root);
	root = NULL;
	return (0);
}

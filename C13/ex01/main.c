/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:06:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/18 15:14:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;
	t_btree	*branches_left;
	t_btree	*branches_right;

	(void)argc;
	branches_left = NULL;
	branches_right = NULL;
	root = NULL;
	root = btree_create_node(argv[1]);
	branches_left = btree_create_node(argv[2]);
	branches_right = btree_create_node(argv[3]);
	root->left = branches_left;
	root->right = branches_right;
	btree_apply_prefix(root, ft_putstr);
	free(root->left);
	root->left = NULL;
	free(root->right);
	root->right = NULL;
	free(root);
	root = NULL;
}

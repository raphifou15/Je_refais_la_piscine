/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:21:08 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/18 11:45:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*tree;

	(void)argc;
	tree = NULL;
	tree = btree_create_node(argv[1]);
	printf("tree->item = %s\n", tree->item);
	printf("tree->left = %s\n", (char *)tree->left);
	printf("tree->right = %s\n", (char *)tree->right);
	free(tree);
	tree = NULL;
	return (0);
}

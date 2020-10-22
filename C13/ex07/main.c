/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:48:50 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/21 16:18:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;

	root = NULL;
	root = btree_push_strs(argc, argv);
	btree_apply_by_level(root, ft_display_node);
	btree_apply_infix(root, ft_write);
	btree_apply_suffix(root, ft_free);
	return (0);
}

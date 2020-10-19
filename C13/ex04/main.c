/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:12:28 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 15:20:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;

	(void)argc;
	root = NULL;
	btree_insert_data(&root, argv[1], ft_strcmp_void);
	btree_insert_data(&root, argv[2], ft_strcmp_void);
	btree_insert_data(&root, argv[1], ft_strcmp_void);
	btree_insert_data(&root, argv[3], ft_strcmp_void);
	btree_insert_data(&root, argv[0], ft_strcmp_void);
	btree_insert_data(&root, "zz", ft_strcmp_void);
	btree_insert_data(&root, "zaz", ft_strcmp_void);
	btree_apply_preffix(root, ft_write);
	btree_apply_infix(root, ft_write);
	btree_apply_suffix(root, ft_free);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:13:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/20 18:48:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;
	int		count;

	root = NULL;
	root = btree_push_strs(argc, argv);
	btree_apply_infix(root, ft_write);
	count = btree_level_count(root);
	ft_putnbr(count);
	btree_apply_suffix(root, ft_free);
}

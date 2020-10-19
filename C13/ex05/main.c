/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:55:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 20:24:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(int argc, char *argv[])
{
	t_btree	*root;
	void	*buffer;

	buffer = NULL;
	root = NULL;
	root = btree_insert_strs(argc, argv);
	btree_apply_infix(root, ft_write);
	buffer = btree_search_item(root, "raphael", ft_strcmp_void);
	write(1, "\n", 1);
	printf("%s\n", (char *)buffer);
	write(1, "\n", 1);
	btree_apply_preffix(root, ft_free);
}

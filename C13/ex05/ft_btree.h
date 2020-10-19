/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:52:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 19:56:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

int				main(int argc, char *argv[]);
t_btree			*btree_insert_strs(int size, char **strs);
void			btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *));
t_btree			*btree_create_node(void *item);
int				ft_strcmp_void(void *a1, void *a2);
void			ft_write(void *elem);
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			ft_free(void *elem);
void			btree_apply_preffix(t_btree *root, void (*applyf)(void *));
void			*btree_search_item(t_btree *root, void *data_ref,
				int (*cmpf)(void *, void *));

#endif

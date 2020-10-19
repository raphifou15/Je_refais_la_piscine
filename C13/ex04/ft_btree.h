/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:15:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 11:59:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

int				main(int argc, char *argv[]);
t_btree			*btree_create_node(void *item);
void			ft_write(void *item);
void			ft_free(void *item);
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_preffix(t_btree *root, void (*applyf)(void *));
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
int				ft_strcmp_void(void *a1, void *a2);
void			btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *));

#endif

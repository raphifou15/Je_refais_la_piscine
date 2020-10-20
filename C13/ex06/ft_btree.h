/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:13:20 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/20 18:03:12 by rkhelif          ###   ########.fr       */
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
t_btree			*btree_push_strs(int size, char **strs);
void			btree_insert_data(t_btree **root, void *data_ref,
				int (*cmpf)(void *, void *));
int				ft_strcmp_void(void *a1, void *a2);
t_btree			*btree_create_node(void *item);
void			ft_free(void *elem);
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void			ft_write(void *item);
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			ft_putnbr(int nbr);
int				btree_level_count(t_btree *root);
#endif

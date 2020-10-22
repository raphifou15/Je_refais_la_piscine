/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:51:20 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/21 16:41:29 by rkhelif          ###   ########.fr       */
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
t_btree			*btree_push_strs(int size, char **strs);
void			btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *));
int				ft_strcmp_void(void *a1, void *a2);
t_btree			*btree_create_node(void *item);
void			ft_free(void *elem);
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void			ft_write(void *item);
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
				int current_level, int is_first));
void			ft_display_node(void *item, int curent_level, int is_first);
void			ft_putnbr(int nbr);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:35:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 17:32:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

int				main(int argc, char *argv[]);
t_list			*ft_list_push_strs(int size, char **strs);
void			ft_list_push_back(t_list **begin_list, void *data);
t_list			*ft_create_elem(void *data);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			ft_void_putstr(void *elem);
void			ft_free(void *elem);
void			ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

#endif

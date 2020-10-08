/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:27:40 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 14:09:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

int				main(int argc, char *argv[]);
t_list			*ft_list_push_strs(int size, char **strs);
void			ft_list_push_back(t_list **begin_list, void *data);
t_list			*ft_create_elem(void *data);
void			ft_list_reverse(t_list **begin_list);
void			ft_free(void *elem);
void			ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

#endif

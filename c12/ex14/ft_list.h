/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 10:45:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 11:32:10 by rkhelif          ###   ########.fr       */
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
void			ft_list_push_front(t_list **begin_list, void *data);
t_list			*ft_create_elem(void *data);
void			ft_free(void *data);
void			ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void			ft_putstr(char *str);
void			ft_write(t_list *begin_list, void (*ptr)(char *));
int				ft_strcmp(char *s1, char *s2);
void			ft_list_sort(t_list **begin_list, int (*cmp)());

#endif

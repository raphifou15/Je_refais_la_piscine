/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:37 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/16 17:44:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert1(t_list **begin_list, t_list *list2)
{
	list2->next = *begin_list;
	*begin_list = list2;
}

int		ft_check(t_list **begin_list, t_list *list2)
{
	if (*begin_list == NULL)
	{
		*begin_list = list2;
		return (1);
	}
	return (0);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*list;
	t_list	*temp;

	temp = NULL;
	new = NULL;
	list = NULL;
	list = *begin_list;
	if (((new = ft_create_elem(data)) == NULL) || ft_check(begin_list, new) > 0)
		return ;
	while (list->next)
	{
		if (cmp(list->data, new->data) > 0)
			return (ft_insert1(begin_list, new));
		if (cmp(list->next->data, new->data) > 0)
		{
			temp = list->next;
			list->next = new;
			new->next = temp;
			return ;
		}
		list = list->next;
	}
	list->next = new;
}

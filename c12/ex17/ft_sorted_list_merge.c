/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:44:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 21:38:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_insert0(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;
	t_list	*temp;

	temp = NULL;
	list = NULL;
	list = *begin_list1;
	temp = begin_list2;
	begin_list2 = begin_list2->next;
	temp->next = list;
	list = temp;
	*begin_list1 = list;
	return (begin_list2);
}

t_list	*ft_insert1(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;
	t_list	*temp;
	t_list	*temp2;

	list = NULL;
	temp = NULL;
	temp2 = NULL;
	list = *begin_list1;
	temp = list->next;
	temp2 = begin_list2;
	begin_list2 = begin_list2->next;
	list->next = temp2;
	temp2->next = temp;
	return (begin_list2);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*list;
	t_list	*temp;

	temp = NULL;
	list = NULL;
	if (begin_list2 == NULL)
		return ;
	if (cmp((*begin_list1)->data, begin_list2->data) > 0)
		begin_list2 = ft_insert0(begin_list1, begin_list2);
	list = *begin_list1;
	while (begin_list2 && list)
	{
		while (list->next && cmp(list->next->data, begin_list2->data) <= 0)
			list = list->next;
		if (list->next)
			begin_list2 = ft_insert1(&list, begin_list2);
		else
		{
			list->next = begin_list2;
			return ;
		}
	}
}

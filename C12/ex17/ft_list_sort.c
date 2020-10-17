/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 00:48:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 00:55:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*ptr)())
{
	t_list	*list;
	void	*buffer;

	buffer = NULL;
	list = NULL;
	list = *begin_list;
	while (list->next)
	{
		if (ptr(list->data, list->next->data) > 0)
		{
			buffer = list->data;
			list->data = list->next->data;
			list->next->data = buffer;
			list = *begin_list;
		}
		else
			list = list->next;
	}
}

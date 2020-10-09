/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:58:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/09 12:05:14 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)())
{
	t_list	*temp;

	temp = NULL;
	temp = begin_list;
	while (temp)
	{
		if (cmp(temp->data, data_ref) == 0)
			f(temp->data);
		temp = temp->next;
	}
}

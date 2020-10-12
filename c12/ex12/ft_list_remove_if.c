/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 10:47:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/12 21:50:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *begin_list;
	while (temp && cmp(temp->data, data_ref) == 0)
	{
		temp2 = temp;
		temp = temp->next;
		(*free_fct)(temp2);
	}
	*begin_list = temp;
	while (temp && temp->next)
	{
		temp2 = temp->next;
		if (cmp(temp2->data, data_ref) == 0)
		{
			temp->next = temp2->next;
			(*free_fct)(temp2);
		}
		else
			temp = temp->next;
	}
}

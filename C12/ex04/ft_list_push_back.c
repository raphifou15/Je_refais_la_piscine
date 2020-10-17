/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 22:16:59 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/06 21:31:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	new = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	temp = *begin_list;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}

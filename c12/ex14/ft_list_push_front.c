/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 10:57:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 11:04:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = NULL;
	new = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	new->next = *begin_list;
	*begin_list = new;
}

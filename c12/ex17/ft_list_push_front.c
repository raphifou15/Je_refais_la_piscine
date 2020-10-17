/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 00:11:16 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 00:18:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = NULL;
	if ((new = ft_create_elem(data)) == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	new->next = *begin_list;
	*begin_list = new;
}

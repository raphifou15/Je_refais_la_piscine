/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:04:57 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/12 10:34:28 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*temp;

	temp = NULL;
	new = NULL;
	if ((new = ft_create_elem(data)) == NULL)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	temp = *begin_list;
	*begin_list = new;
	(*begin_list)->next = temp;
}

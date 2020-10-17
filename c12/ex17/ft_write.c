/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 00:38:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 00:40:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_write(t_list *begin_list, void (*ptr)())
{
	t_list	*list;

	list = NULL;
	list = begin_list;
	while (list)
	{
		ptr(list->data);
		list = list->next;
	}
}

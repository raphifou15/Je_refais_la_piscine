/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 22:40:48 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 22:42:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_write(t_list *begin_list, void (*ptr)())
{
	while (begin_list)
	{
		ptr(begin_list->data);
		begin_list = begin_list->next;
	}
}

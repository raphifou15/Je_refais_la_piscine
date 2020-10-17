/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 00:27:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 00:33:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*ptr)())
{
	t_list	*temp;

	temp = NULL;
	while (begin_list)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		ptr(temp);
	}
}

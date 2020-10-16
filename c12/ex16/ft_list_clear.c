/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 22:33:32 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 22:36:32 by rkhelif          ###   ########.fr       */
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

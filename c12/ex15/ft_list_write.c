/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:57:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 20:18:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_write(t_list **begin_list, void (*ptr)())
{
	t_list	*temp;

	temp = *begin_list;
	while (temp)
	{
		ptr(temp->data);
		temp = temp->next;
	}
}

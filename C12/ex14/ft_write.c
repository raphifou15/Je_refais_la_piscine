/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:21:49 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 11:26:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_write(t_list *begin_list, void (*ptr)(char *))
{
	t_list	*temp;

	temp = NULL;
	temp = begin_list;
	while (temp)
	{
		ptr(temp->data);
		temp = temp->next;
	}
}

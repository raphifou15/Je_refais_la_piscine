/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:23:43 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/12 21:51:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_write(t_list *begin_list, void (*ptr)(char *))
{
	t_list	*temp;

	temp = NULL;
	temp = begin_list;
	while (temp)
	{
		if (temp->data != NULL)
			ptr(temp->data);
		temp = temp->next;
	}
}

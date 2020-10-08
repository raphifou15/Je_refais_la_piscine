/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:31:09 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 14:30:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	temp = NULL;
	temp2 = NULL;
	temp3 = NULL;
	temp = *begin_list;
	if (temp == NULL || temp->next == NULL)
		return ;
	temp2 = temp->next;
	temp->next = NULL;
	temp3 = temp2->next;
	temp2->next = temp;
	while (temp3)
	{
		temp = temp2;
		temp2 = temp3;
		temp3 = temp3->next;
		temp2->next = temp;
	}
	*begin_list = temp2;
}

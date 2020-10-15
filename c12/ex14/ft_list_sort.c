/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 11:30:56 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 12:06:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** t_list a la place de void fonctionne aussi
*/

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	t_list	*temp2;
	void	*buffer;

	buffer = NULL;
	temp = NULL;
	temp2 = NULL;
	temp = *begin_list;
	temp2 = *begin_list;
	while (temp->next)
	{
		if (cmp(temp->data, temp->next->data) > 0)
		{
			buffer = temp->data;
			temp->data = temp->next->data;
			temp->next->data = buffer;
			temp = temp2;
		}
		else
			temp = temp->next;
	}
}

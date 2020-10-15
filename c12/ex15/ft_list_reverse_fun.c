/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:19:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 20:18:28 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*temp;

	temp = NULL;
	temp = begin_list;
	size = 0;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*temp;
	t_list	*temp2;
	void	*buffer;
	int		size;
	int		i;

	temp = NULL;
	temp2 = NULL;
	buffer = NULL;
	i = 0;
	temp = begin_list;
	size = ft_list_size(begin_list);
	while (size > 1)
	{
		buffer = temp->data;
		temp2 = temp;
		while (++i < size)
			temp2 = temp2->next;
		i = 0;
		size -= 2;
		temp->data = temp2->data;
		temp2->data = buffer;
		temp = temp->next;
	}
}

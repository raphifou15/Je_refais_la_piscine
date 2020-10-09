/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:52:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/09 17:01:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*new;

	new = NULL;
	new = begin_list;
	while (new)
	{
		if (cmp(new->data, data_ref) == 0)
			return (new);
		new = new->next;
	}
	return (new);
}

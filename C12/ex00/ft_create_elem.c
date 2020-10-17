/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:08:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/27 17:25:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list_chain;

	if ((list_chain = malloc(sizeof(t_list))) == 0)
		return (NULL);
	(*list_chain).data = data;
	list_chain->next = NULL;
	return (list_chain);
}

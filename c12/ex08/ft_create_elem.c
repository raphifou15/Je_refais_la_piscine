/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:26:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/07 17:29:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	if ((elem = malloc(sizeof(*elem))) == NULL)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

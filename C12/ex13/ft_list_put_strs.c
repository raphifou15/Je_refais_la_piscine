/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_put_strs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 16:38:14 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/13 16:43:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_put_strs(int size, char **strs)
{
	t_list	*list;

	list = NULL;
	while (--size > -1)
		ft_list_push_back(&list, strs[size]);
	return (list);
}

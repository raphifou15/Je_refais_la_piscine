/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:32:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/13 18:45:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_write(t_list **begin_list, void (*ptr)(char *))
{
	t_list	*temp;

	temp = NULL;
	temp = *begin_list;
	while (temp)
	{
		(void)(ptr);
		printf("%s\n", temp->data);
		temp = temp->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:26:34 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 14:22:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*temp;

	temp = NULL;
	list = NULL;
	list = ft_list_push_strs(argc, argv);
	ft_list_reverse(&list);
	temp = list;
	while (temp)
	{
		printf("%s\n", temp->data);
		temp = temp->next;
	}
	ft_list_clear(list, ft_free);
	return (0);
}

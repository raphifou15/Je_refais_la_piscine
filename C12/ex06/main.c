/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:55:03 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/06 23:10:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*temp;

	list = NULL;
	temp = NULL;
	list = ft_list_push_strs(argc, argv);
	temp = list;
	while (temp)
	{
		printf("%s\n", temp->data);
		temp = temp->next;
	}
	ft_list_clear(list, ft_free);
	return (0);
}

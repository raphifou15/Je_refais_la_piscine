/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 11:30:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/06 21:25:45 by rkhelif          ###   ########.fr       */
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
	while (list)
	{
		temp = list;
		printf("%s\n", list->data);
		list = list->next;
		free(temp);
		temp = NULL;
	}
	return (0);
}

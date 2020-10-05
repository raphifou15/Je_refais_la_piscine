/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:44:05 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/05 22:20:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;

	(void)argc;
	list = NULL;
	list = ft_create_elem(argv[1]);
	ft_list_push_back(&list, argv[2]);
	printf("%s\n", list->data);
	printf("%s\n", list->next->data);
	free(list->next);
	list->next = NULL;
	free(list);
	list = NULL;
	return (0);
}

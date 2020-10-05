/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 11:57:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/05 15:40:14 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list_chain;
	t_list	*last;

	(void)argc;
	list_chain = NULL;
	list_chain = ft_create_elem(argv[1]);
	ft_list_push_front(&list_chain, argv[2]);
	ft_list_push_front(&list_chain, argv[3]);
	last = ft_list_last(list_chain);
	printf("%s\n", last->data);
	printf("%s\n", (*list_chain).data);
	printf("%s\n", list_chain->next->data);
	printf("%s\n", list_chain->next->next->data);
	free(list_chain->next->next);
	list_chain->next->next = NULL;
	printf("%s\n", list_chain->next->data);
	free(list_chain->next);
	list_chain->next = NULL;
	free(list_chain);
	list_chain = NULL;
	return (0);
}

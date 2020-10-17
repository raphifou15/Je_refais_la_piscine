/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 11:28:23 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/05 11:47:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list_chain;
	int		size;

	size = 0;
	(void)argc;
	list_chain = NULL;
	list_chain = ft_create_elem(argv[1]);
	ft_list_push_front(&list_chain, argv[2]);
	size = ft_list_size(list_chain);
	printf("%s\n", (char *)(list_chain->next->next));
	printf("%s\n%s\n", list_chain->data, list_chain->next->data);
	printf("Le nombre d'éléments de la liste chainée est %d\n", size);
	free(list_chain->next);
	list_chain->next = NULL;
	free(list_chain);
	list_chain = NULL;
	return (0);
}

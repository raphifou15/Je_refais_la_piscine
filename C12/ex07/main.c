/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 13:55:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/07 16:12:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	unsigned int	i;
	t_list			*list;
	t_list			*temp;

	srand(time(NULL));
	i = rand() % (argc - 1 + 1 - 0) + 0;
	temp = NULL;
	list = NULL;
	if ((list = ft_list_push_strs(argc, argv)) == NULL)
		return (0);
	temp = ft_list_at(list, i);
	printf("%u: %s\n", i, temp->data);
	ft_list_clear(list, ft_free);
	return (0);
}

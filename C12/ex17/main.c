/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 23:54:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/17 21:46:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*list2;

	list = NULL;
	list2 = NULL;
	list = ft_list_push_strs(argc, argv);
	list2 = ft_list_push_strs(argc, argv);
	ft_list_push_front(&list2, "!");
	ft_list_push_front(&list2, "!");
	ft_list_push_front(&list2, "zz");
	ft_list_sort(&list, ft_strcmp);
	ft_list_sort(&list2, ft_strcmp);
	ft_sorted_list_merge(&list, list2, ft_strcmp);
	ft_write(list, ft_putstr);
	ft_list_clear(list, ft_free);
	return (0);
}

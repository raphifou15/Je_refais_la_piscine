/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 10:43:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/15 11:29:25 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;

	list = NULL;
	list = ft_list_push_strs(argc, argv);
	ft_list_sort(&list, ft_strcmp);
	ft_write(list, ft_putstr);
	ft_list_clear(list, ft_free);
}

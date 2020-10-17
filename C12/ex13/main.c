/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 16:22:47 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/14 23:02:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*list2;

	list2 = NULL;
	list = NULL;
	list = ft_list_put_strs(argc, argv);
	list2 = ft_list_put_strs2();
	ft_list_merge(&list, list2);
	ft_list_write(&list, ft_putstr);
	ft_list_clear(list, ft_free);
	return (0);
}

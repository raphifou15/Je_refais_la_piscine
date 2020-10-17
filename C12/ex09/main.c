/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:38:53 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 17:28:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;

	list = NULL;
	list = ft_list_push_strs(argc, argv);
	ft_list_foreach(list, ft_void_putstr);
	ft_list_clear(list, ft_free);
	return (0);
}

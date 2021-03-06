/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:01:53 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/09 12:06:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*list;

	list = NULL;
	list = ft_list_push_strs(argc, argv);
	ft_list_foreach_if(list, ft_write, argv[1], ft_strcmp);
	ft_list_clear(list, ft_free);
	return (0);
}

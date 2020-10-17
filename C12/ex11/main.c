/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:16:15 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/09 17:05:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*elem;

	list = NULL;
	list = ft_list_push_strs(argc, argv);
	elem = ft_list_find(list, "raph", ft_strcmp);
	(elem == NULL) ? printf("%s\n", (char *)elem) : printf("%s\n", elem->data);
	ft_list_clear(list, ft_free);
	return (0);
}

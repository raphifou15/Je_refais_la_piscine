/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tab_fd_0c.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:56:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:19:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_display_tab_fd_0c(t_list tab)
{
	if ((ft_strcmp(tab.str, tab.str_past) == 0) && tab.equal != '*')
	{
		tab.equal = '*';
		write(1, "*\n", 2);
	}
	if (ft_strcmp(tab.str, tab.str_past) != 0)
	{
		ft_display_octet_c(tab.octet);
		ft_display_str_hexa(tab.str);
		ft_display_str(tab.str);
		tab.equal = 'a';
		write(1, "\n", 1);
	}
	return (tab);
}

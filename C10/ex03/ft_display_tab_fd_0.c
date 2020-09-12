/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tab_fd_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:18:03 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:27:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_display_tab_fd_0(t_list tab)
{
	if ((ft_strcmp(tab.str, tab.str_past) == 0) && tab.equal != '*')
	{
		tab.equal = '*';
		write(1, "*\n", 2);
	}
	if (ft_strcmp(tab.str, tab.str_past) != 0)
	{
		ft_display_octet(tab.octet);
		ft_display_str_hexa_invers(tab.str);
		tab.equal = 'a';
		write(1, "\n", 1);
	}
	return (tab);
}

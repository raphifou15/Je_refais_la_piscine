/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_tab_fd_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:26:23 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/10 01:02:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_put_in_tab_fd_0(t_list tab)
{
	ft_strncpy(tab.str_past, tab.str, 17);
	ft_memset(tab.str, '\0', 17);
	tab.octet = tab.octet + 16;
	return (tab);
}

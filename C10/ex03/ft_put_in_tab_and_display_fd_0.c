/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_tab_and_display_fd_0.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:05:42 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:04:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_put_in_tab_and_display_fd_0(char *str, t_list tab, int x)
{
	unsigned long	size_tab_str;
	unsigned long	size;

	while (ft_strlen(str) > 0)
	{
		size = 16 - ft_strlen(tab.str);
		size_tab_str = ft_strlen(tab.str);
		tab = ft_put_in_str(str, tab, size_tab_str);
		if (x == 1)
			tab = (ft_strlen(tab.str) == 16) ? ft_display_tab_fd_0(tab) : tab;
		if (x == 2)
			tab = (ft_strlen(tab.str) == 16) ? ft_display_tab_fd_0c(tab) : tab;
		tab = (ft_strlen(tab.str) == 16) ? ft_put_in_tab_fd_0(tab) : tab;
		str = ft_cut_str(str, size);
	}
	return (tab);
}

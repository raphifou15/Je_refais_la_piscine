/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_rest2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 17:40:48 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:20:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_rest2(t_list tab)
{
	int	size;
	int	i;

	i = -1;
	ft_display_octet_c(tab.octet);
	if (tab.str[0] == '\0')
		return ;
	size = ft_strlen(tab.str);
	size = (size > 8) ? ((16 - size) * 3) : ((16 - size) * 3) + 1;
	ft_display_str_hexa(tab.str);
	while (++i < size)
		write(1, " ", 1);
	ft_display_str(tab.str);
	write(1, "\n", 1);
	tab.octet += ft_strlen(tab.str);
	ft_display_octet_c(tab.octet);
	write(1, "\n", 1);
}

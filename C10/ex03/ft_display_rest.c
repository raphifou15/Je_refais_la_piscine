/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_rest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:08:02 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 16:34:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_rest(t_list tab)
{
	ft_display_octet(tab.octet);
	ft_display_str_hexa_invers2(tab.str);
	write(1, "\n", 1);
	if (tab.str[0] == '\0')
		return ;
	tab.octet += ft_strlen(tab.str);
	ft_display_octet(tab.octet);
	write(1, "\n", 1);
}

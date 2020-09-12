/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_list_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 13:09:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/06 13:25:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_t_list_init(void)
{
	t_list	tab;

	tab.octet = 0;
	tab.str[0] = '\0';
	tab.str_past[0] = '\0';
	tab.equal = 'a';
	return (tab);
}

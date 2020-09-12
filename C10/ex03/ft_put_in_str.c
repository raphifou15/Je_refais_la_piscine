/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 11:15:48 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:40:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_put_in_str(char *str, t_list tab, unsigned long size)
{
	unsigned long	i;
	unsigned long	j;

	i = 16 - size;
	i = 16 - i;
	j = 0;
	while (str[j] && i < 16)
		tab.str[i++] = str[j++];
	tab.str[i] = '\0';
	return (tab);
}

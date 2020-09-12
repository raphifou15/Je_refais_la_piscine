/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_nbr0.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 23:31:11 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/08 23:36:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_nbr0(unsigned long size)
{
	while (size++ < 7)
		write(1, "0", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_octet.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 22:36:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:39:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

unsigned long	ft_size_octet(unsigned long nbr)
{
	unsigned long	size;

	size = 1;
	while (nbr > 15)
	{
		size++;
		nbr /= 16;
	}
	return (size);
}

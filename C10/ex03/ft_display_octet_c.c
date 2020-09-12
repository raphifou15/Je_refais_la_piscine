/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_octet_c.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 00:16:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:25:36 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_octet_c(unsigned long nbr)
{
	char			tab[17];
	unsigned long	size;

	ft_init_tab_octet(tab);
	size = ft_size_octet(nbr);
	ft_display_nbr0_c(size);
	ft_putnbr_longhexa(nbr, tab);
	write(1, "  ", 2);
}

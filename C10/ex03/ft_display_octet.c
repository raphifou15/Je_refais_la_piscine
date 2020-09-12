/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_octet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:58:19 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/08 23:55:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_octet(unsigned long nbr)
{
	char			tab[17];
	unsigned long	size;

	ft_init_tab_octet(tab);
	size = ft_size_octet(nbr);
	ft_display_nbr0(size);
	ft_putnbr_longhexa(nbr, tab);
	write(1, " ", 1);
}

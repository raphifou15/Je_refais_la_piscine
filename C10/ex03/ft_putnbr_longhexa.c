/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_longhexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 00:16:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/10 00:45:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_putnbr_longhexa(unsigned long nbr, char *tab)
{
	(nbr < 16) ? ft_putchar(tab[nbr]) : ft_putnbr_longhexa(nbr / 16, tab);
	(nbr > 15) ? ft_putchar(tab[nbr % 16]) : nbr;
}

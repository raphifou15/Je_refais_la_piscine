/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 00:10:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:10:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_str_hexa(char *str)
{
	char			tab[17];
	int				i;
	unsigned long	size;

	i = -1;
	ft_init_tab_octet(tab);
	while (str[++i])
	{
		if ((size = ft_size_octet((unsigned char)str[i])) == 1)
			write(1, "0", 1);
		ft_putnbr_longhexa((unsigned char)str[i], tab);
		(i == 7) ? write(1, "  ", 2) : write(1, " ", 1);
	}
	write(1, " ", 1);
}

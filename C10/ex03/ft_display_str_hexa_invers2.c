/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str_hexa_invers2.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:48:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:08:46 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_str_hexa_invers2(char *str)
{
	char			tab[17];
	int				i;
	unsigned long	size;
	int				x;

	i = -1;
	ft_init_tab_octet(tab);
	while (str[++i])
	{
		x = i;
		x = ((x == 0) || (x >= 2 && x % 2 == 0)) ? x + 1 : x - 1;
		if ((size = ft_size_octet((unsigned char)str[x])) == 1)
			write(1, "0", 1);
		ft_putnbr_longhexa((unsigned char)str[x], tab);
		((i > 2 && i % 2 != 0) || (i == 1)) ? write(1, " ", 1) : 0;
		if (str[x] == '\0')
		{
			if ((size = ft_size_octet((unsigned char)str[x - 1])) == 1)
				write(1, "0", 1);
			ft_putnbr_longhexa((unsigned char)str[x - 1], tab);
		}
	}
}

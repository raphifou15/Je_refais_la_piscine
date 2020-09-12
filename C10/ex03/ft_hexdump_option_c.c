/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump_option_c.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:49:57 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:50:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_hexdump_option_c(int argc, char *argv[])
{
	t_list	tab;
	int		i;

	i = 1;
	tab = ft_t_list_init();
	while (argc == 2)
		tab = ft_infinity(tab, 2);
	while (++i < argc)
		tab = ft_open_and_read(argv[i], tab, 2);
	ft_display_rest2(tab);
}

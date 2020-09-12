/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:39:44 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:50:36 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_hexdump(int argc, char *argv[])
{
	t_list	tab;
	int		i;

	i = 0;
	if (argc > 1 && (ft_strcmp(argv[1], "-C") == 0))
		return (ft_hexdump_option_c(argc, argv));
	tab = ft_t_list_init();
	while (argc == 1)
		tab = ft_infinity(tab, 1);
	while (++i < argc)
		tab = ft_open_and_read(argv[i], tab, 1);
	ft_display_rest(tab);
}

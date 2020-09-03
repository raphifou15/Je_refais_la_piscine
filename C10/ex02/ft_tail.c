/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:47:54 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/03 02:32:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (argc > 1 && (ft_strcmp(argv[1], "-c") == 0))
		return (ft_tail_option_c(argc, argv));
	ft_check_tail(argc, argv, 0);
	while (++i < argc)
		x += ft_open_and_read_from_end_file(argv[i], argc, x);
}

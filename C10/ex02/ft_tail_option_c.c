/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_option_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 16:01:09 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:16:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail_option_c(int argc, char *argv[])
{
	unsigned long	num;
	int				i;
	int				x;

	x = 0;
	if ((ft_check_tail(argc, argv, 2) == -1))
		return ;
	if (((num = ft_unsigned_long_atoi(argv[2])) == 0))
		return ;
	ft_check_tail(argc, argv, 3);
	i = 2;
	while (++i < argc)
		x += ft_open_and_read_from_end_file2(argv[i], argc, x, num);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:40:42 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 20:05:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_do_op(int argc, char *argv[])
{
	int	(*operation)(int, char, int);
	int	num;

	if (ft_error(argc, argv) == 0)
		return ;
	operation = &ft_calcul;
	num = (*operation)(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	ft_putnbr(num);
	write(1, "\n", 1);
}

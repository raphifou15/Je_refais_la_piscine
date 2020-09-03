/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 19:13:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:08:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_check_tail(int argc, char *argv[], int option)
{
	int	i;

	i = 0;
	if (option == 0)
		while (argc == 1)
			;
	if (option == 2 && argc == 2)
		return (ft_error(4, argv[1], -1));
	if (option == 3)
		while (argc == 3)
			;
	return (i);
}

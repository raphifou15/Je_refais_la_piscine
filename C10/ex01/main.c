/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:35:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 18:56:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char *argv[])
{
	int	x;

	x = 0;
	while (argc == 1)
		ft_infinity();
	while (++x < argc)
		ft_open_and_read(argv[x]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:13:54 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 13:55:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char *argv[])
{
	(void)argv;
	if ((ft_checkargc(argc) == 0))
		return (0);
	ft_open_and_readfile(argv[1]);
	return (0);
}

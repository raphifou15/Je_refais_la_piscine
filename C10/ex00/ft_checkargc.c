/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:21:20 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 17:52:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_checkargc(int i)
{
	if (i <= 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (i > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

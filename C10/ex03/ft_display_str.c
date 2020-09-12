/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 00:25:17 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:11:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_display_str(char *str)
{
	int	i;

	i = -1;
	write(1, "|", 1);
	while (str[++i])
		(str[i] > 31 && str[i] < 127) ? ft_putchar(str[i]) : ft_putchar('.');
	write(1, "|", 1);
}

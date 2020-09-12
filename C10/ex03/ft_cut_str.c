/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:16:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 16:56:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_cut_str(char *str, unsigned long size)
{
	unsigned long	i;

	i = 0;
	while (str[i] != '\0' && i < size)
		i++;
	return (str + i);
}

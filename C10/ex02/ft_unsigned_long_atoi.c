/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_long_atoi.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:08:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:03:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

unsigned long	ft_unsigned_long_atoi(char *str)
{
	unsigned long	nbr;
	unsigned long	nbrpast;
	int				i;

	nbrpast = 0;
	i = -1;
	while (str[++i] && str[i] > 47 && str[i] < 58)
	{
		nbr = (i == 0) ? nbr : nbr * 10;
		nbr = (i == 0) ? (unsigned long)(str[i] - 48) : nbr + (str[i] - 48);
		if (nbrpast > nbr || nbrpast > 1999999999999999999)
			return (ft_error2(str, 1));
		nbrpast = nbr;
	}
	if (str[i] != '\0')
		return (ft_check_letter(str + i, nbr, -1, str));
	return (nbr);
}

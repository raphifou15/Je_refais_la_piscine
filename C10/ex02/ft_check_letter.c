/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 15:00:24 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:07:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

unsigned long	ft_check_letter(char *str, unsigned long nbr, int i, char *str2)
{
	unsigned long	nb;
	unsigned long	max;

	max = 18446744073709551615U;
	nb = 1;
	while (str[++i])
		;
	if (i > 1)
		return (ft_error2(str2, 2));
	if (str[0] != 'b' && str[0] != 'k' && str[0] != 'm')
		return (ft_error2(str2, 2));
	nb = (str[0] == 'b') ? 512 : nb;
	nb = (str[0] == 'k') ? 1024 : nb;
	nb = (str[0] == 'm') ? 1048576 : nb;
	if (nbr > (max / nb))
		return (ft_error2(str2, 2));
	return (nbr * nb);
}

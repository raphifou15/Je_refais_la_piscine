/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 15:13:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:10:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

unsigned long	ft_error2(char *str, int er)
{
	(er == 1) ? ft_putstr("ft_tail: nombre d'octets incorrect: «") : 0;
	(er == 1) ? ft_putstr(str) : 0;
	(er == 1) ? ft_putstr("»: Valeur trop grande pour le type défini de") : 0;
	(er == 1) ? ft_putstr(" données\n") : 0;
	(er == 2) ? ft_putstr("ft_tail: nombre d'octets incorrect: «") : 0;
	(er == 2) ? ft_putstr(str) : 0;
	(er == 2) ? ft_putstr("»:\n") : 0;
	return (0);
}

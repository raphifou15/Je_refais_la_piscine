/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:10:22 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/11 18:56:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_error(int x, char *str, char *str2)
{
	(x == 1) ? ft_putstr("hexdump: ") : 0;
	(x == 1) ? ft_putstr(str) : 0;
	(x == 1) ? ft_putstr(": Aucun fichier ou dossier de ce type\n") : 0;
	(x == 2) ? ft_putstr("hexdump: ") : 0;
	(x == 2) ? ft_putstr(str) : 0;
	(x == 2) ? ft_putstr(": est un dossier\n") : 0;
	(x == 3) ? ft_putstr("hexdump: ") : 0;
	(x == 3) ? ft_putstr(strerror(errno)) : 0;
	return (str2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_octet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 23:27:38 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 00:11:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

unsigned long	ft_nbr_octet(char *file)
{
	int				fd;
	char			lecture;
	unsigned long	nbr_octet;
	unsigned long	nbr_past;
	int				rec;

	nbr_octet = 0;
	nbr_past = 0;
	if (((fd = open(file, O_RDONLY)) == -1))
		return (ft_error(1, file, 0));
	while (((rec = read(fd, &lecture, 1)) > 0))
	{
		++nbr_octet;
		if (nbr_octet < nbr_past)
		{
			ft_putstr("le fichier est trop long pour être lue\n");
			return (0);
		}
		nbr_past = nbr_octet;
	}
	if (rec == -1)
		return (ft_error(2, file, 0));
	if (close(fd) == -1)
		return (ft_error(3, file, 0));
	return (nbr_octet);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read_from_end_file2.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 19:28:09 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:13:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_open_and_read_from_end_file2(char *file,
		int argc, int x, unsigned long num)
{
	char			lecture;
	int				fd;
	unsigned long	nbr_octets;
	int				rec;

	if (((nbr_octets = ft_nbr_octet(file)) == 0))
		return (x);
	if (((fd = open(file, O_RDONLY)) == -1))
		return (ft_error(1, file, x));
	(argc > 4) ? ft_put_header(file, x) : 0;
	while (((rec = read(fd, &lecture, 1)) > 0))
	{
		(num >= nbr_octets) ? write(1, &lecture, 1) : 0;
		nbr_octets = (nbr_octets > num) ? nbr_octets - 1 : nbr_octets;
	}
	if (rec == -1)
		return (ft_error(2, file, x));
	if (close(fd) == -1)
		return (ft_error(3, file, x));
	return (x + 1);
}

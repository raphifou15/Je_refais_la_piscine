/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read_from_end_file.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:03:14 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/03 02:24:53 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_open_and_read_from_end_file(char *file, int argc, int x)
{
	int				fd;
	unsigned long	lines;
	int				rec;
	char			lecture;

	if ((lines = ft_lines(file)) == 0)
		return (x);
	if (((fd = open(file, O_RDONLY)) == -1))
		return (ft_error(1, file, x));
	(argc > 2) ? ft_put_header(file, x) : 0;
	while (((rec = read(fd, &lecture, 1)) > 0))
	{
		(lines > 10) ? 0 : write(1, &lecture, 1);
		(lecture == '\n') ? --lines : 0;
	}
	if (rec == -1)
		return (ft_error(2, file, x));
	if (close(fd) == -1)
		return (ft_error(3, file, x));
	return (x + 1);
}

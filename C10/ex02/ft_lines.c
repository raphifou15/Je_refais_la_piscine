/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 01:28:22 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/03 02:14:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

unsigned long	ft_lines(char *file)
{
	int				fd;
	unsigned long	lines;
	char			lecture;
	int				rec;

	lines = 0;
	if (((fd = open(file, O_RDONLY)) == -1))
	{
		(ft_error(1, file, 0));
		return (0);
	}
	while (((rec = read(fd, &lecture, 1)) > 0))
		(lecture == '\n') ? ++lines : 0;
	if (rec == -1)
	{
		ft_error(2, file, 0);
		return (0);
	}
	if (close(fd) == -1)
	{
		ft_error(3, file, 0);
		return (0);
	}
	return (lines);
}

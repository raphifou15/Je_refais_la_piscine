/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:36:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 19:04:26 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_open_and_read(char *str)
{
	int		fd;
	int		rec;
	char	lecture;

	if ((fd = open(str, O_RDONLY)) == -1)
		return (ft_error());
	while ((rec = read(fd, &lecture, 1)) > 0)
		write(1, &lecture, 1);
	if (rec == -1)
		return (ft_error());
	if ((close(fd)) == -1)
		return (ft_error());
}

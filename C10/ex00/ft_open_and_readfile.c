/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_readfile.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:54:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 14:11:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_open_and_readfile(char *str)
{
	int		fd;
	char	lecture;
	int		rec;

	fd = open(str, O_RDONLY);
	(fd == -1) ? ft_putstr("Cannot read file.\n") : 0;
	if (fd == -1)
		return ;
	while ((rec = read(fd, &lecture, 1)) > 0)
		write(1, &lecture, 1);
	close(fd);
}

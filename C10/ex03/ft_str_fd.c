/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:17:40 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 14:35:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_str_fd(char *str)
{
	int				fd;
	int				rec;
	char			lecture;
	char			*str2;

	str2 = NULL;
	if ((fd = open(str, O_RDONLY)) == -1)
		return (ft_error(1, str, str2));
	while ((rec = read(fd, &lecture, 1)) > 0)
		str2 = ft_join(str2, lecture);
	if (rec == -1)
		return (ft_error(2, str, str2));
	if (close(fd) == -1)
		return (ft_error(3, str, str2));
	return (str2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_fd_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:27:29 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/06 23:04:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_str_fd_0(void)
{
	unsigned long	i;
	char			lecture;
	char			*str;
	int				rec;

	str = NULL;
	i = 0;
	while (((rec = read(0, &lecture, 1)) > 0) && lecture != 10)
	{
		++i;
		str = ft_join(str, lecture);
	}
	if (rec == -1)
		return (ft_free(str));
	str = ft_join(str, '\n');
	return (str);
}

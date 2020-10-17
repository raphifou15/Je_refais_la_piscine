/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:57:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/08 17:42:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_void_putstr(void *elem)
{
	char	*str;
	int		i;

	i = -1;
	str = (char *)elem;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

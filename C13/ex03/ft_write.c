/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:53:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/18 20:59:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_write(void *elem)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)elem;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

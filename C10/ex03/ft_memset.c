/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:29:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:41:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*dest;

	dest = (char*)s;
	i = -1;
	while (dest[++i] != '\0' && n > (unsigned long)i)
		dest[i] = c;
	return (dest);
}

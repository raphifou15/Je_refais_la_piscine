/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:17:28 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:38:44 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_strncpy(char *dest, char *src, int nb)
{
	int	i;

	i = -1;
	while (src[++i] && i < nb)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

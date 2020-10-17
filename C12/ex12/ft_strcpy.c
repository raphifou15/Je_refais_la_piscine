/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:23:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/12 21:52:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_strcpy(char *src, char *dest)
{
	int	size;
	int	i;

	i = -1;
	size = -1;
	while (src[++size])
		;
	if ((dest = malloc(sizeof(src[0]) * (size + 1))) == NULL)
		return (NULL);
	while (++i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
